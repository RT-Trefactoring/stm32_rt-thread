# for module compiling
import os
try:
    import pin_get
except:
    print('Run "python tools/install.py" first')
    exit(0)
import rtconfig
import soc_config
import stm32_config_tools
from building import *
from xml.dom.minidom import parse
import xml.dom.minidom

cwd = GetCurrentDir()
objs = []

for option in BuildOptions.keys():
    if 'CHIP' in option:
        chip_name = option.replace('CHIP_','')
        break
try:
    rom_base = soc_config.DeviceDic[chip_name]['ROM_BASE']
    rom_size = soc_config.DeviceDic[chip_name]['ROM_SIZE']
    ram_base = soc_config.DeviceDic[chip_name]['RAM_BASE']
    ram_size = soc_config.DeviceDic[chip_name]['RAM_SIZE']
except:
    print('Run menuconfig first')
    exit(0)
stm32_config_tools.mdk5_config(cwd + '/template.uvprojx',soc_config.DeviceDic[chip_name])
stm32_config_tools.sct_config(rom_base, rom_size, ram_base, ram_size, os.path.join(cwd,'rtthread_stm32.sct'))
stm32_config_tools.ld_config(rom_base, rom_size, ram_base, ram_size, os.path.join(cwd,'rtthread_stm32.ld'))
stm32_config_tools.icf_config(rom_base, rom_size, ram_base, ram_size, os.path.join(cwd,'rtthread_stm32.icf'))
CPPDEFINES = ['STM32_SRAM_SIZE=' + str(ram_size/1024),'STM32_PIN_NUMBERS=' + str(pin_get.get_pin_num())]
src = ''
group = DefineGroup('Setting', src, depend = [''], CPPDEFINES=CPPDEFINES, CPPPATH = '')

list = os.listdir(cwd)
for d in list:
    path = os.path.join(cwd, d)
    if os.path.isfile(os.path.join(path, 'SConscript')):
        objs = objs + SConscript(os.path.join(d, 'SConscript'))
objs += group
Return('objs')
