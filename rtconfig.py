# BSP Note: For TI EK-TM4C1294XL Tiva C Series Connected LancuhPad	(REV D)

import os
import sys
# toolchains options

if os.getenv('RTT_CC'):
	CROSS_TOOL = os.getenv('RTT_CC')
	
#device options
sys.path += [os.path.join(os.getcwd(), 'tools')]
import stm32_config_tools


ARCH='arm'
CROSS_TOOL='gcc'
try:
    CPU = stm32_config_tools.GetCPU()
except:
    CPU = 'not-choose'

if CPU == 'cortex-m4':
    FPU = 'fpv4-sp-d16'
    FLOAT_ABI = 'hard'
elif CPU == 'cortex-m7':
    FPU = 'fpv5-d16'
    FLOAT_ABI = 'hard'
else:
    FPU = 'softvfp'
    FLOAT_ABI = 'softfp'

# cross_tool provides the cross compiler
# EXEC_PATH is the compiler execute path, for example, CodeSourcery, Keil MDK, IAR
if  CROSS_TOOL  == 'gcc':
	PLATFORM 	= 'gcc'
	EXEC_PATH 	= '/usr/local/Cellar/arm-none-eabi-gcc/7-2017-q4-major/gcc/bin/'
elif CROSS_TOOL == 'keil':
	PLATFORM 	= 'armcc'
	EXEC_PATH 	= 'C:/Keil_v5'
elif CROSS_TOOL == 'iar':
	PLATFORM 	= 'iar'
	EXEC_PATH 	= 'C:/Program Files (x86)/IAR Systems/Embedded Workbench 7.2'

if os.getenv('RTT_EXEC_PATH'):
	EXEC_PATH = os.getenv('RTT_EXEC_PATH')

BUILD = 'debug'
#BUILD = 'release'

if PLATFORM == 'gcc':
    # tool-chains
    PREFIX = 'arm-none-eabi-'
    CC = PREFIX + 'gcc'
    AS = PREFIX + 'gcc'
    AR = PREFIX + 'ar'
    LINK = PREFIX + 'gcc'
    TARGET_EXT = 'elf'
    SIZE = PREFIX + 'size'
    OBJDUMP = PREFIX + 'objdump'
    OBJCPY = PREFIX + 'objcopy'
	
    DEVICE = ' -mcpu=' + CPU + ' -mthumb -mfpu=' + FPU + ' -mfloat-abi=' + FLOAT_ABI + ' -ffunction-sections -fdata-sections'
    CFLAGS = DEVICE + ' -std=c99'
    AFLAGS = ' -c' + DEVICE + ' -x assembler-with-cpp -Wa,-mimplicit-it=thumb '
    LFLAGS = DEVICE + ' -Wl,--gc-sections,-Map=rtthread_stm32.map,-cref,-u,Reset_Handler -T rtthread_stm32.ld'

    CPATH = ''
    LPATH = ''

    if BUILD == 'debug':
        CFLAGS += ' -O0 -gdwarf-2 -g'
        AFLAGS += ' -gdwarf-2'
    else:
        CFLAGS += ' -O2'

    POST_ACTION = OBJCPY + ' -O binary $TARGET rtthread_stm32.bin\n' + SIZE + ' $TARGET \n'

elif PLATFORM == 'armcc':
    # toolchains
    CC = 'armcc'
    AS = 'armasm'
    AR = 'armar'
    LINK = 'armlink'
    TARGET_EXT = 'axf'

    DEVICE = ' --cpu ' + CPU + '.fp '
    CFLAGS = '-c ' + DEVICE + ' --apcs=interwork --c99'
    AFLAGS = DEVICE + ' --apcs=interwork '
    LFLAGS = DEVICE + ' --scatter "rtthread_stm32.sct" --info sizes --info totals --info unused --info veneers --list rtthread-stm32.map --strict'

    CFLAGS += ' -I' + EXEC_PATH + '/ARM/ARMCC/INC'
    LFLAGS += ' --libpath ' + EXEC_PATH + '/ARM/ARMCC/LIB'
	
    CFLAGS += ' -D__MICROLIB '
    AFLAGS += ' --pd "__MICROLIB SETA 1" '
    LFLAGS += ' --library_type=microlib '
    EXEC_PATH += '/arm/armcc/bin/'

    if BUILD == 'debug':
        CFLAGS += ' -g -O0'
        AFLAGS += ' -g'
    else:
        CFLAGS += ' -O2'

    POST_ACTION = 'fromelf --bin $TARGET --output rtthread.bin \nfromelf -z $TARGET'

elif PLATFORM == 'iar':
    print('================ERROR============================')
    print('Not support iar yet!')
    print('=================================================')
    exit(0)