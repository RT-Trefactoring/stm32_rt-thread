#ifndef RT_CONFIG_H__
#define RT_CONFIG_H__

/* Automatically generated file; DO NOT EDIT. */
/* RT-Thread Configuration */

/* RT-Thread Kernel */

#define RT_NAME_MAX 8
#define RT_ALIGN_SIZE 4
/* RT_THREAD_PRIORITY_8 is not set */
#define RT_THREAD_PRIORITY_32
/* RT_THREAD_PRIORITY_256 is not set */
#define RT_THREAD_PRIORITY_MAX 32
#define RT_TICK_PER_SECOND 100
#define RT_USING_OVERFLOW_CHECK
#define RT_USING_HOOK
#define RT_IDEL_HOOK_LIST_SIZE 4
#define IDLE_THREAD_STACK_SIZE 256
/* RT_USING_TIMER_SOFT is not set */
#define RT_DEBUG
/* RT_DEBUG_INIT_CONFIG is not set */
/* RT_DEBUG_THREAD_CONFIG is not set */
/* RT_DEBUG_SCHEDULER_CONFIG is not set */
/* RT_DEBUG_IPC_CONFIG is not set */
/* RT_DEBUG_TIMER_CONFIG is not set */
/* RT_DEBUG_IRQ_CONFIG is not set */
/* RT_DEBUG_MEM_CONFIG is not set */
/* RT_DEBUG_SLAB_CONFIG is not set */
/* RT_DEBUG_MEMHEAP_CONFIG is not set */
/* RT_DEBUG_MODULE_CONFIG is not set */

/* Inter-Thread communication */

#define RT_USING_SEMAPHORE
#define RT_USING_MUTEX
#define RT_USING_EVENT
#define RT_USING_MAILBOX
#define RT_USING_MESSAGEQUEUE
/* RT_USING_SIGNALS is not set */

/* Memory Management */

#define RT_USING_MEMPOOL
/* RT_USING_MEMHEAP is not set */
/* RT_USING_NOHEAP is not set */
#define RT_USING_SMALL_MEM
/* RT_USING_SLAB is not set */
/* RT_USING_MEMTRACE is not set */
#define RT_USING_HEAP

/* Kernel Device Object */

#define RT_USING_DEVICE
/* RT_USING_DEVICE_OPS is not set */
/* RT_USING_INTERRUPT_INFO is not set */
#define RT_USING_CONSOLE
#define RT_CONSOLEBUF_SIZE 128
#define RT_CONSOLE_DEVICE_NAME "uart"

/* RT-Thread Components */

#define RT_USING_COMPONENTS_INIT
#define RT_USING_USER_MAIN
#define RT_MAIN_THREAD_STACK_SIZE 2048
#define RT_MAIN_THREAD_PRIORITY 10

/* C++ features */

/* RT_USING_CPLUSPLUS is not set */

/* Command shell */

#define RT_USING_FINSH
#define FINSH_THREAD_NAME "tshell"
#define FINSH_USING_HISTORY
#define FINSH_HISTORY_LINES 5
#define FINSH_USING_SYMTAB
#define FINSH_USING_DESCRIPTION
/* FINSH_ECHO_DISABLE_DEFAULT is not set */
#define FINSH_THREAD_PRIORITY 20
#define FINSH_THREAD_STACK_SIZE 4096
#define FINSH_CMD_SIZE 80
/* FINSH_USING_AUTH is not set */
#define FINSH_USING_MSH
#define FINSH_USING_MSH_DEFAULT
/* FINSH_USING_MSH_ONLY is not set */
#define FINSH_ARG_MAX 10

/* Device virtual file system */

#define RT_USING_DFS
#define DFS_USING_WORKDIR
#define DFS_FILESYSTEMS_MAX 2
#define DFS_FILESYSTEM_TYPES_MAX 2
#define DFS_FD_MAX 16
/* RT_USING_DFS_MNTTABLE is not set */
/* RT_USING_DFS_ELMFAT is not set */
#define RT_USING_DFS_DEVFS
/* RT_USING_DFS_ROMFS is not set */
/* RT_USING_DFS_RAMFS is not set */
/* RT_USING_DFS_UFFS is not set */
/* RT_USING_DFS_JFFS2 is not set */

/* Device Drivers */

#define RT_USING_DEVICE_IPC
#define RT_PIPE_BUFSZ 512
#define RT_USING_SERIAL
/* RT_USING_CAN is not set */
/* RT_USING_HWTIMER is not set */
/* RT_USING_CPUTIME is not set */
/* RT_USING_I2C is not set */
#define RT_USING_PIN
/* RT_USING_PWM is not set */
/* RT_USING_MTD_NOR is not set */
/* RT_USING_MTD_NAND is not set */
/* RT_USING_MTD is not set */
/* RT_USING_RTC is not set */
/* RT_USING_SDIO is not set */
/* RT_USING_SPI is not set */
/* RT_USING_WDT is not set */
/* RT_USING_AUDIO is not set */

/* Using WiFi */

/* RT_USING_WIFI is not set */

/* Using USB */

/* RT_USING_USB_HOST is not set */
/* RT_USING_USB_DEVICE is not set */

/* POSIX layer and C standard library */

#define RT_USING_LIBC
/* RT_USING_PTHREADS is not set */
#define RT_USING_POSIX
/* RT_USING_POSIX_MMAP is not set */
/* RT_USING_POSIX_TERMIOS is not set */
/* RT_USING_POSIX_AIO is not set */
/* RT_USING_MODULE is not set */

/* Network */

/* Socket abstraction layer */

/* RT_USING_SAL is not set */

/* light weight TCP/IP stack */

/* RT_USING_LWIP is not set */

/* Modbus master and slave stack */

/* RT_USING_MODBUS is not set */

/* AT commands */

/* RT_USING_AT is not set */

/* VBUS(Virtual Software BUS) */

/* RT_USING_VBUS is not set */

/* Utilities */

/* RT_USING_LOGTRACE is not set */
/* RT_USING_RYM is not set */

/* RT-Thread online packages */

/* IoT - internet of things */

/* PKG_USING_PAHOMQTT is not set */
/* PKG_USING_WEBCLIENT is not set */
/* PKG_USING_MONGOOSE is not set */
/* PKG_USING_WEBTERMINAL is not set */
/* PKG_USING_CJSON is not set */
/* PKG_USING_JSMN is not set */
/* PKG_USING_LJSON is not set */
/* PKG_USING_EZXML is not set */
/* PKG_USING_NANOPB is not set */

/* Wi-Fi */

/* Marvell WiFi */

/* PKG_USING_WLANMARVELL is not set */

/* Wiced WiFi */

/* PKG_USING_WLAN_WICED is not set */
/* PKG_USING_COAP is not set */
/* PKG_USING_NOPOLL is not set */
/* PKG_USING_NETUTILS is not set */
/* PKG_USING_AT_DEVICE is not set */

/* IoT Cloud */

/* PKG_USING_ONENET is not set */
/* PKG_USING_GAGENT_CLOUD is not set */
/* PKG_USING_ALI_IOTKIT is not set */
/* PKG_USING_AZURE is not set */

/* security packages */

/* PKG_USING_MBEDTLS is not set */
/* PKG_USING_libsodium is not set */
/* PKG_USING_TINYCRYPT is not set */

/* language packages */

/* PKG_USING_LUA is not set */
/* PKG_USING_JERRYSCRIPT is not set */
/* PKG_USING_MICROPYTHON is not set */

/* multimedia packages */

/* PKG_USING_OPENMV is not set */
/* PKG_USING_MUPDF is not set */

/* tools packages */

/* PKG_USING_CMBACKTRACE is not set */
/* PKG_USING_EASYFLASH is not set */
/* PKG_USING_EASYLOGGER is not set */
/* PKG_USING_SYSTEMVIEW is not set */

/* system packages */

/* PKG_USING_GUIENGINE is not set */
/* PKG_USING_CAIRO is not set */
/* PKG_USING_PIXMAN is not set */
/* PKG_USING_LWEXT4 is not set */
/* PKG_USING_PARTITION is not set */
/* PKG_USING_FAL is not set */
/* PKG_USING_SQLITE is not set */
/* PKG_USING_RTI is not set */
/* PKG_USING_LITTLEVGL2RTT is not set */

/* peripheral libraries and drivers */

#define PKG_USING_STM32F4_HAL
#define PKG_USING_STM32F4_HAL_V10702
/* PKG_USING_STM32F4_HAL_LATEST_VERSION is not set */
#define PKG_USING_STM32F4_DRIVERS
/* PKG_USING_STM32F4_DRIVERS_V10000 is not set */
#define PKG_USING_STM32F4_DRIVERS_LATEST_VERSION
/* PKG_USING_REALTEK_AMEBA is not set */
/* PKG_USING_SHT2X is not set */
/* PKG_USING_AHT10 is not set */
/* PKG_USING_AP3216C is not set */
/* PKG_USING_STM32_SDIO is not set */

/* miscellaneous packages */

/* PKG_USING_LIBCSV is not set */
/* PKG_USING_OPTPARSE is not set */
/* PKG_USING_FASTLZ is not set */
/* PKG_USING_MINILZO is not set */
/* PKG_USING_QUICKLZ is not set */
/* PKG_USING_MULTIBUTTON is not set */
/* PKG_USING_CANFESTIVAL is not set */
/* PKG_USING_ZLIB is not set */
/* PKG_USING_DSTR is not set */

/* sample package */

/* samples: kernel and components samples */

/* PKG_USING_KERNEL_SAMPLES is not set */
/* PKG_USING_FILESYSTEM_SAMPLES is not set */
/* PKG_USING_NETWORK_SAMPLES is not set */
/* PKG_USING_PERIPHERAL_SAMPLES is not set */

/* example package: hello */

/* PKG_USING_HELLO is not set */

/* Privated Packages of RealThread */

/* PKG_USING_CODEC is not set */
/* PKG_USING_PLAYER is not set */
/* PKG_USING_PERSIMMON_SRC is not set */

/* Network Utilities */

/* PKG_USING_WICED is not set */
/* PKG_USING_CLOUDSDK is not set */
/* PKG_USING_COREMARK is not set */
/* PKG_USING_POWER_MANAGER is not set */
/* PKG_USING_RT_OTA is not set */
/* PKG_USING_RDBD_SRC is not set */
/* PKG_USING_RTINSIGHT is not set */

/* Test Packages of RealThread */

/* PKG_USING_JERRYSCRIPT_WIN32 is not set */
/* PKG_USING_JS_PERSIMMON is not set */

/* RT-Thread Senior Membership Packages */

/* system packages */

/* PKG_USING_FTL_SRC is not set */

/* IoT - internet of things */

/* Webnet: A web server package for rt-thread */

/* PKG_USING_WEBNET is not set */

/* rtpkgs online packages */

/* PKG_USING_CSTRING is not set */
/* PKG_USING_ARGPARSE is not set */
/* PKG_USING_LIBBMPREAD is not set */
/* PKG_USING_LIBUTILS is not set */
/* PKG_USING_SAM is not set */
/* SOC_ARM_CM0 is not set */
/* SOC_ARM_CM0_P is not set */
/* SOC_ARM_CM3 is not set */
#define SOC_ARM_CM4
/* SOC_ARM_CM7 is not set */
/* SOC_STM32F3 is not set */
#define SOC_STM32F4
/* SOC_STM32L4 is not set */
/* SOC_STM32F042F6 is not set */
/* SOC_STM32F098CC is not set */
/* SOC_STM32F058R8 is not set */
/* SOC_STM32F091RC is not set */
/* SOC_STM32F072R8 is not set */
/* SOC_STM32F031F4 is not set */
/* SOC_STM32F031C4 is not set */
/* SOC_STM32F030K6 is not set */
/* SOC_STM32F030C6 is not set */
/* SOC_STM32F042T6 is not set */
/* SOC_STM32F051C6 is not set */
/* SOC_STM32F042K6 is not set */
/* SOC_STM32F071VB is not set */
/* SOC_STM32F031K6 is not set */
/* SOC_STM32F078VB is not set */
/* SOC_STM32F071V8 is not set */
/* SOC_STM32F091VB is not set */
/* SOC_STM32F072VB is not set */
/* SOC_STM32F051T8 is not set */
/* SOC_STM32F091VC is not set */
/* SOC_STM32F042K4 is not set */
/* SOC_STM32F051K4 is not set */
/* SOC_STM32F070CB is not set */
/* SOC_STM32F051R8 is not set */
/* SOC_STM32F070F6 is not set */
/* SOC_STM32F031G6 is not set */
/* SOC_STM32F058C8 is not set */
/* SOC_STM32F072RB is not set */
/* SOC_STM32F078CB is not set */
/* SOC_STM32F071CB is not set */
/* SOC_STM32F051C8 is not set */
/* SOC_STM32F042C4 is not set */
/* SOC_STM32F038C6 is not set */
/* SOC_STM32F072CB is not set */
/* SOC_STM32F042G6 is not set */
/* SOC_STM32F091RB is not set */
/* SOC_STM32F048G6 is not set */
/* SOC_STM32F070C6 is not set */
/* SOC_STM32F078RB is not set */
/* SOC_STM32F038G6 is not set */
/* SOC_STM32F072V8 is not set */
/* SOC_STM32F030F4 is not set */
/* SOC_STM32F072C8 is not set */
/* SOC_STM32F042C6 is not set */
/* SOC_STM32F098RC is not set */
/* SOC_STM32F031F6 is not set */
/* SOC_STM32F038E6 is not set */
/* SOC_STM32F058T8 is not set */
/* SOC_STM32F051K8 is not set */
/* SOC_STM32F030CC is not set */
/* SOC_STM32F051C4 is not set */
/* SOC_STM32F091CC is not set */
/* SOC_STM32F031K4 is not set */
/* SOC_STM32F091CB is not set */
/* SOC_STM32F042F4 is not set */
/* SOC_STM32F038K6 is not set */
/* SOC_STM32F051R6 is not set */
/* SOC_STM32F071RB is not set */
/* SOC_STM32F030RC is not set */
/* SOC_STM32F038F6 is not set */
/* SOC_STM32F030C8 is not set */
/* SOC_STM32F051K6 is not set */
/* SOC_STM32F031G4 is not set */
/* SOC_STM32F042G4 is not set */
/* SOC_STM32F071C8 is not set */
/* SOC_STM32F098VC is not set */
/* SOC_STM32F051R4 is not set */
/* SOC_STM32F048T6 is not set */
/* SOC_STM32F070RB is not set */
/* SOC_STM32F031E6 is not set */
/* SOC_STM32F030R8 is not set */
/* SOC_STM32F031C6 is not set */
/* SOC_STM32F048C6 is not set */
/* SOC_STM32F101R6 is not set */
/* SOC_STM32F101R4 is not set */
/* SOC_STM32F103R8 is not set */
/* SOC_STM32F101R8 is not set */
/* SOC_STM32F100V8 is not set */
/* SOC_STM32F105RB is not set */
/* SOC_STM32F103C6 is not set */
/* SOC_STM32F103C4 is not set */
/* SOC_STM32F101ZC is not set */
/* SOC_STM32F103C8 is not set */
/* SOC_STM32F101ZF is not set */
/* SOC_STM32F101ZG is not set */
/* SOC_STM32F101ZD is not set */
/* SOC_STM32F101ZE is not set */
/* SOC_STM32F103R6 is not set */
/* SOC_STM32F103VD is not set */
/* SOC_STM32F100VE is not set */
/* SOC_STM32F103VE is not set */
/* SOC_STM32F103VF is not set */
/* SOC_STM32F100RD is not set */
/* SOC_STM32F101VB is not set */
/* SOC_STM32F105V8 is not set */
/* SOC_STM32F101VC is not set */
/* SOC_STM32F103CB is not set */
/* SOC_STM32F103ZC is not set */
/* SOC_STM32F103ZD is not set */
/* SOC_STM32F103ZE is not set */
/* SOC_STM32F105R8 is not set */
/* SOC_STM32F103ZG is not set */
/* SOC_STM32F101RB is not set */
/* SOC_STM32F101RC is not set */
/* SOC_STM32F103RB is not set */
/* SOC_STM32F103RC is not set */
/* SOC_STM32F103RD is not set */
/* SOC_STM32F101RG is not set */
/* SOC_STM32F103RF is not set */
/* SOC_STM32F101RE is not set */
/* SOC_STM32F105RC is not set */
/* SOC_STM32F101T4 is not set */
/* SOC_STM32F101T6 is not set */
/* SOC_STM32F101T8 is not set */
/* SOC_STM32F103ZF is not set */
/* SOC_STM32F105VC is not set */
/* SOC_STM32F100VC is not set */
/* SOC_STM32F100VB is not set */
/* SOC_STM32F101RF is not set */
/* SOC_STM32F103RE is not set */
/* SOC_STM32F101RD is not set */
/* SOC_STM32F100VD is not set */
/* SOC_STM32F100R8 is not set */
/* SOC_STM32F102R8 is not set */
/* SOC_STM32F103RG is not set */
/* SOC_STM32F107VC is not set */
/* SOC_STM32F101TB is not set */
/* SOC_STM32F102R4 is not set */
/* SOC_STM32F102R6 is not set */
/* SOC_STM32F101VF is not set */
/* SOC_STM32F101VG is not set */
/* SOC_STM32F101VD is not set */
/* SOC_STM32F103VG is not set */
/* SOC_STM32F100RC is not set */
/* SOC_STM32F100RB is not set */
/* SOC_STM32F103VB is not set */
/* SOC_STM32F103VC is not set */
/* SOC_STM32F105VB is not set */
/* SOC_STM32F103TB is not set */
/* SOC_STM32F103R4 is not set */
/* SOC_STM32F100ZE is not set */
/* SOC_STM32F100ZD is not set */
/* SOC_STM32F100ZC is not set */
/* SOC_STM32F103V8 is not set */
/* SOC_STM32F101V8 is not set */
/* SOC_STM32F102RB is not set */
/* SOC_STM32F100R6 is not set */
/* SOC_STM32F107VB is not set */
/* SOC_STM32F100R4 is not set */
/* SOC_STM32F102C8 is not set */
/* SOC_STM32F100C8 is not set */
/* SOC_STM32F100C4 is not set */
/* SOC_STM32F100RE is not set */
/* SOC_STM32F100C6 is not set */
/* SOC_STM32F102C6 is not set */
/* SOC_STM32F102C4 is not set */
/* SOC_STM32F101CB is not set */
/* SOC_STM32F107RB is not set */
/* SOC_STM32F100CB is not set */
/* SOC_STM32F107RC is not set */
/* SOC_STM32F101VE is not set */
/* SOC_STM32F103T6 is not set */
/* SOC_STM32F103T4 is not set */
/* SOC_STM32F101C8 is not set */
/* SOC_STM32F102CB is not set */
/* SOC_STM32F101C4 is not set */
/* SOC_STM32F101C6 is not set */
/* SOC_STM32F103T8 is not set */
/* SOC_STM32F205RB is not set */
/* SOC_STM32F205VB is not set */
/* SOC_STM32F205RC is not set */
/* SOC_STM32F205VE is not set */
/* SOC_STM32F207IG is not set */
/* SOC_STM32F205VC is not set */
/* SOC_STM32F207ZG is not set */
/* SOC_STM32F205ZE is not set */
/* SOC_STM32F205RE is not set */
/* SOC_STM32F207ZC is not set */
/* SOC_STM32F215RG is not set */
/* SOC_STM32F207ZE is not set */
/* SOC_STM32F215ZG is not set */
/* SOC_STM32F217VE is not set */
/* SOC_STM32F207IC is not set */
/* SOC_STM32F215VG is not set */
/* SOC_STM32F217ZE is not set */
/* SOC_STM32F207VE is not set */
/* SOC_STM32F217VG is not set */
/* SOC_STM32F207VC is not set */
/* SOC_STM32F217IE is not set */
/* SOC_STM32F205ZG is not set */
/* SOC_STM32F215RE is not set */
/* SOC_STM32F207IE is not set */
/* SOC_STM32F207VG is not set */
/* SOC_STM32F207VF is not set */
/* SOC_STM32F217ZG is not set */
/* SOC_STM32F205ZC is not set */
/* SOC_STM32F205RF is not set */
/* SOC_STM32F205RG is not set */
/* SOC_STM32F205ZF is not set */
/* SOC_STM32F217IG is not set */
/* SOC_STM32F207IF is not set */
/* SOC_STM32F205VF is not set */
/* SOC_STM32F205VG is not set */
/* SOC_STM32F215VE is not set */
/* SOC_STM32F207ZF is not set */
/* SOC_STM32F215ZE is not set */
/* SOC_STM32F302R6 is not set */
/* SOC_STM32F318C8 is not set */
/* SOC_STM32F302K8 is not set */
/* SOC_STM32F302RB is not set */
/* SOC_STM32F303RD is not set */
/* SOC_STM32F301C6 is not set */
/* SOC_STM32F373VC is not set */
/* SOC_STM32F303RE is not set */
/* SOC_STM32F301K8 is not set */
/* SOC_STM32F303K6 is not set */
/* SOC_STM32F303C6 is not set */
/* SOC_STM32F373VB is not set */
/* SOC_STM32F301R8 is not set */
/* SOC_STM32F303C8 is not set */
/* SOC_STM32F303ZE is not set */
/* SOC_STM32F301C8 is not set */
/* SOC_STM32F373C8 is not set */
/* SOC_STM32F303VC is not set */
/* SOC_STM32F302RC is not set */
/* SOC_STM32F373RB is not set */
/* SOC_STM32F334C6 is not set */
/* SOC_STM32F303R8 is not set */
/* SOC_STM32F373V8 is not set */
/* SOC_STM32F334R8 is not set */
/* SOC_STM32F358RC is not set */
/* SOC_STM32F303VB is not set */
/* SOC_STM32F303R6 is not set */
/* SOC_STM32F378VC is not set */
/* SOC_STM32F334C8 is not set */
/* SOC_STM32F378CC is not set */
/* SOC_STM32F302VD is not set */
/* SOC_STM32F334K4 is not set */
/* SOC_STM32F302VC is not set */
/* SOC_STM32F302VB is not set */
/* SOC_STM32F302VE is not set */
/* SOC_STM32F302C8 is not set */
/* SOC_STM32F302RE is not set */
/* SOC_STM32F302ZD is not set */
/* SOC_STM32F303VD is not set */
/* SOC_STM32F302ZE is not set */
/* SOC_STM32F378RC is not set */
/* SOC_STM32F303VE is not set */
/* SOC_STM32F398VE is not set */
/* SOC_STM32F303RB is not set */
/* SOC_STM32F303RC is not set */
/* SOC_STM32F334K8 is not set */
/* SOC_STM32F303ZD is not set */
/* SOC_STM32F303K8 is not set */
/* SOC_STM32F303CC is not set */
/* SOC_STM32F334K6 is not set */
/* SOC_STM32F302C6 is not set */
/* SOC_STM32F318K8 is not set */
/* SOC_STM32F302CC is not set */
/* SOC_STM32F303CB is not set */
/* SOC_STM32F334C4 is not set */
/* SOC_STM32F328C8 is not set */
/* SOC_STM32F358VC is not set */
/* SOC_STM32F334R6 is not set */
/* SOC_STM32F302R8 is not set */
/* SOC_STM32F358CC is not set */
/* SOC_STM32F373R8 is not set */
/* SOC_STM32F373CC is not set */
/* SOC_STM32F302CB is not set */
/* SOC_STM32F373CB is not set */
/* SOC_STM32F373RC is not set */
/* SOC_STM32F302K6 is not set */
/* SOC_STM32F301K6 is not set */
/* SOC_STM32F302RD is not set */
/* SOC_STM32F301R6 is not set */
#define CHIP_STM32F412ZGJx
/* CHIP_STM32F411VCTx is not set */
/* CHIP_STM32F437VITx is not set */
/* CHIP_STM32F429NGHx is not set */
/* CHIP_STM32F412VETx is not set */
/* CHIP_STM32F410CBUx is not set */
/* CHIP_STM32F469ZITx is not set */
/* CHIP_STM32F417IEHx is not set */
/* CHIP_STM32F417VETx is not set */
/* CHIP_STM32F446VETx is not set */
/* CHIP_STM32F429ZITx is not set */
/* CHIP_STM32F479VGTx is not set */
/* CHIP_STM32F412VGHx is not set */
/* CHIP_STM32F411VEHx is not set */
/* CHIP_STM32F412RGTx is not set */
/* CHIP_STM32F469IETx is not set */
/* CHIP_STM32F469IITx is not set */
/* CHIP_STM32F469VITx is not set */
/* CHIP_STM32F410R8Tx is not set */
/* CHIP_STM32F401CBUx is not set */
/* CHIP_STM32F469IGHx is not set */
/* CHIP_STM32F439VITx is not set */
/* CHIP_STM32F413VGTx is not set */
/* CHIP_STM32F401VDTx is not set */
/* CHIP_STM32F423VHTx is not set */
/* CHIP_STM32F417IGTx is not set */
/* CHIP_STM32F413CGUx is not set */
/* CHIP_STM32F446ZEHx is not set */
/* CHIP_STM32F410TBYx is not set */
/* CHIP_STM32F401CDYx is not set */
/* CHIP_STM32F469ZETx is not set */
/* CHIP_STM32F427ZITx is not set */
/* CHIP_STM32F446RCTx is not set */
/* CHIP_STM32F439BGTx is not set */
/* CHIP_STM32F423CHUx is not set */
/* CHIP_STM32F401VBHx is not set */
/* CHIP_STM32F413VHHx is not set */
/* CHIP_STM32F411CCUx is not set */
/* CHIP_STM32F469AEHx is not set */
/* CHIP_STM32F412ZETx is not set */
/* CHIP_STM32F429BITx is not set */
/* CHIP_STM32F469VETx is not set */
/* CHIP_STM32F417ZGTx is not set */
/* CHIP_STM32F427VITx is not set */
/* CHIP_STM32F415VGTx is not set */
/* CHIP_STM32F429IITx is not set */
/* CHIP_STM32F469AIYx is not set */
/* CHIP_STM32F429IETx is not set */
/* CHIP_STM32F437VGTx is not set */
/* CHIP_STM32F410T8Yx is not set */
/* CHIP_STM32F439VGTx is not set */
/* CHIP_STM32F417ZETx is not set */
/* CHIP_STM32F446ZETx is not set */
/* CHIP_STM32F412RETx is not set */
/* CHIP_STM32F401VDHx is not set */
/* CHIP_STM32F429VETx is not set */
/* CHIP_STM32F439ZIYx is not set */
/* CHIP_STM32F413VHTx is not set */
/* CHIP_STM32F413CHUx is not set */
/* CHIP_STM32F429IEHx is not set */
/* CHIP_STM32F437IGHx is not set */
/* CHIP_STM32F479VITx is not set */
/* CHIP_STM32F429IIHx is not set */
/* CHIP_STM32F407IETx is not set */
/* CHIP_STM32F479IIHx is not set */
/* CHIP_STM32F437IITx is not set */
/* CHIP_STM32F439AIHx is not set */
/* CHIP_STM32F469AEYx is not set */
/* CHIP_STM32F411RCTx is not set */
/* CHIP_STM32F439BITx is not set */
/* CHIP_STM32F439NGHx is not set */
/* CHIP_STM32F413RGTx is not set */
/* CHIP_STM32F439IGTx is not set */
/* CHIP_STM32F479AIYx is not set */
/* CHIP_STM32F429VGTx is not set */
/* CHIP_STM32F401CCUx is not set */
/* CHIP_STM32F410CBTx is not set */
/* CHIP_STM32F407IGHx is not set */
/* CHIP_STM32F401RCTx is not set */
/* CHIP_STM32F427IGTx is not set */
/* CHIP_STM32F401CEYx is not set */
/* CHIP_STM32F429BETx is not set */
/* CHIP_STM32F405VGTx is not set */
/* CHIP_STM32F405OGYx is not set */
/* CHIP_STM32F429AIHx is not set */
/* CHIP_STM32F429ZETx is not set */
/* CHIP_STM32F410RBTx is not set */
/* CHIP_STM32F437ZGTx is not set */
/* CHIP_STM32F417VGTx is not set */
/* CHIP_STM32F401RDTx is not set */
/* CHIP_STM32F439ZGTx is not set */
/* CHIP_STM32F412ZEJx is not set */
/* CHIP_STM32F427IITx is not set */
/* CHIP_STM32F401RETx is not set */
/* CHIP_STM32F439IIHx is not set */
/* CHIP_STM32F479ZITx is not set */
/* CHIP_STM32F405OEYx is not set */
/* CHIP_STM32F427ZGTx is not set */
/* CHIP_STM32F446RETx is not set */
/* CHIP_STM32F479IITx is not set */
/* CHIP_STM32F427VGTx is not set */
/* CHIP_STM32F413VGHx is not set */
/* CHIP_STM32F469BITx is not set */
/* CHIP_STM32F429NEHx is not set */
/* CHIP_STM32F439NIHx is not set */
/* CHIP_STM32F479ZGTx is not set */
/* CHIP_STM32F417IETx is not set */
/* CHIP_STM32F413ZGJx is not set */
/* CHIP_STM32F401CBYx is not set */
/* CHIP_STM32F429AGHx is not set */
/* CHIP_STM32F411VETx is not set */
/* CHIP_STM32F411CCYx is not set */
/* CHIP_STM32F423ZHJx is not set */
/* CHIP_STM32F469AIHx is not set */
/* CHIP_STM32F479IGHx is not set */
/* CHIP_STM32F407ZGTx is not set */
/* CHIP_STM32F429NIHx is not set */
/* CHIP_STM32F479NGHx is not set */
/* CHIP_STM32F405ZGTx is not set */
/* CHIP_STM32F413MHYx is not set */
/* CHIP_STM32F446VCTx is not set */
/* CHIP_STM32F479AIHx is not set */
/* CHIP_STM32F423VHHx is not set */
/* CHIP_STM32F417IGHx is not set */
/* CHIP_STM32F429ZGTx is not set */
/* CHIP_STM32F411VCHx is not set */
/* CHIP_STM32F479AGHx is not set */
/* CHIP_STM32F427AGHx is not set */
/* CHIP_STM32F412VGTx is not set */
/* CHIP_STM32F427IGHx is not set */
/* CHIP_STM32F412VEHx is not set */
/* CHIP_STM32F415RGTx is not set */
/* CHIP_STM32F412ZGTx is not set */
/* CHIP_STM32F469ZGTx is not set */
/* CHIP_STM32F429IGTx is not set */
/* CHIP_STM32F479BGTx is not set */
/* CHIP_STM32F407VETx is not set */
/* CHIP_STM32F469BGTx is not set */
/* CHIP_STM32F446ZCHx is not set */
/* CHIP_STM32F401VCHx is not set */
/* CHIP_STM32F411CEUx is not set */
/* CHIP_STM32F413RHTx is not set */
/* CHIP_STM32F469NEHx is not set */
/* CHIP_STM32F413ZHTx is not set */
/* CHIP_STM32F401CDUx is not set */
/* CHIP_STM32F413ZGTx is not set */
/* CHIP_STM32F469VGTx is not set */
/* CHIP_STM32F412CGUx is not set */
/* CHIP_STM32F401VBTx is not set */
/* CHIP_STM32F479AGYx is not set */
/* CHIP_STM32F479BITx is not set */
/* CHIP_STM32F410RBIx is not set */
/* CHIP_STM32F412RGYx is not set */
/* CHIP_STM32F446ZCTx is not set */
/* CHIP_STM32F401VCTx is not set */
/* CHIP_STM32F423MHYx is not set */
/* CHIP_STM32F469AGYx is not set */
/* CHIP_STM32F427AIHx is not set */
/* CHIP_STM32F423RHTx is not set */
/* CHIP_STM32F407ZETx is not set */
/* CHIP_STM32F401VEHx is not set */
/* CHIP_STM32F412CEUx is not set */
/* CHIP_STM32F427IIHx is not set */
/* CHIP_STM32F479NIHx is not set */
/* CHIP_STM32F410C8Tx is not set */
/* CHIP_STM32F437IIHx is not set */
/* CHIP_STM32F410R8Ix is not set */
/* CHIP_STM32F401VETx is not set */
/* CHIP_STM32F407IEHx is not set */
/* CHIP_STM32F429IGHx is not set */
/* CHIP_STM32F469BETx is not set */
/* CHIP_STM32F401CCYx is not set */
/* CHIP_STM32F446ZEJx is not set */
/* CHIP_STM32F411RETx is not set */
/* CHIP_STM32F407IGTx is not set */
/* CHIP_STM32F469AGHx is not set */
/* CHIP_STM32F405RGTx is not set */
/* CHIP_STM32F469NIHx is not set */
/* CHIP_STM32F437AIHx is not set */
/* CHIP_STM32F429ZIYx is not set */
/* CHIP_STM32F423ZHTx is not set */
/* CHIP_STM32F439IGHx is not set */
/* CHIP_STM32F446MEYx is not set */
/* CHIP_STM32F407VGTx is not set */
/* CHIP_STM32F429BGTx is not set */
/* CHIP_STM32F446MCYx is not set */
/* CHIP_STM32F401CEUx is not set */
/* CHIP_STM32F469NGHx is not set */
/* CHIP_STM32F469IEHx is not set */
/* CHIP_STM32F429VITx is not set */
/* CHIP_STM32F412REYx is not set */
/* CHIP_STM32F439ZITx is not set */
/* CHIP_STM32F413ZHJx is not set */
/* CHIP_STM32F411CEYx is not set */
/* CHIP_STM32F479IGTx is not set */
/* CHIP_STM32F437ZITx is not set */
/* CHIP_STM32F439IITx is not set */
/* CHIP_STM32F401RBTx is not set */
/* CHIP_STM32F415OGYx is not set */
/* CHIP_STM32F469IIHx is not set */
/* CHIP_STM32F413MGYx is not set */
/* CHIP_STM32F410C8Ux is not set */
/* CHIP_STM32F437IGTx is not set */
/* CHIP_STM32F469IGTx is not set */
/* CHIP_STM32F415ZGTx is not set */
#define SOC_STM32F412ZG
/* SOC_STM32F411VC is not set */
/* SOC_STM32F437VI is not set */
/* SOC_STM32F429NG is not set */
/* SOC_STM32F412VE is not set */
/* SOC_STM32F410CB is not set */
/* SOC_STM32F469ZI is not set */
/* SOC_STM32F417IE is not set */
/* SOC_STM32F417VE is not set */
/* SOC_STM32F446VE is not set */
/* SOC_STM32F429ZI is not set */
/* SOC_STM32F479VG is not set */
/* SOC_STM32F412VG is not set */
/* SOC_STM32F411VE is not set */
/* SOC_STM32F412RG is not set */
/* SOC_STM32F469IE is not set */
/* SOC_STM32F469II is not set */
/* SOC_STM32F469VI is not set */
/* SOC_STM32F410R8 is not set */
/* SOC_STM32F401CB is not set */
/* SOC_STM32F469IG is not set */
/* SOC_STM32F439VI is not set */
/* SOC_STM32F413VG is not set */
/* SOC_STM32F401VD is not set */
/* SOC_STM32F423VH is not set */
/* SOC_STM32F417IG is not set */
/* SOC_STM32F413CG is not set */
/* SOC_STM32F446ZE is not set */
/* SOC_STM32F410TB is not set */
/* SOC_STM32F401CD is not set */
/* SOC_STM32F469ZE is not set */
/* SOC_STM32F427ZI is not set */
/* SOC_STM32F446RC is not set */
/* SOC_STM32F439BG is not set */
/* SOC_STM32F423CH is not set */
/* SOC_STM32F401VB is not set */
/* SOC_STM32F413VH is not set */
/* SOC_STM32F411CC is not set */
/* SOC_STM32F469AE is not set */
/* SOC_STM32F412ZE is not set */
/* SOC_STM32F429BI is not set */
/* SOC_STM32F469VE is not set */
/* SOC_STM32F417ZG is not set */
/* SOC_STM32F427VI is not set */
/* SOC_STM32F415VG is not set */
/* SOC_STM32F429II is not set */
/* SOC_STM32F469AI is not set */
/* SOC_STM32F429IE is not set */
/* SOC_STM32F437VG is not set */
/* SOC_STM32F410T8 is not set */
/* SOC_STM32F439VG is not set */
/* SOC_STM32F417ZE is not set */
/* SOC_STM32F412RE is not set */
/* SOC_STM32F429VE is not set */
/* SOC_STM32F439ZI is not set */
/* SOC_STM32F413CH is not set */
/* SOC_STM32F437IG is not set */
/* SOC_STM32F479VI is not set */
/* SOC_STM32F407IE is not set */
/* SOC_STM32F479II is not set */
/* SOC_STM32F437II is not set */
/* SOC_STM32F439AI is not set */
/* SOC_STM32F411RC is not set */
/* SOC_STM32F439BI is not set */
/* SOC_STM32F439NG is not set */
/* SOC_STM32F413RG is not set */
/* SOC_STM32F439IG is not set */
/* SOC_STM32F479AI is not set */
/* SOC_STM32F429VG is not set */
/* SOC_STM32F401CC is not set */
/* SOC_STM32F407IG is not set */
/* SOC_STM32F401RC is not set */
/* SOC_STM32F427IG is not set */
/* SOC_STM32F401CE is not set */
/* SOC_STM32F429BE is not set */
/* SOC_STM32F405VG is not set */
/* SOC_STM32F405OG is not set */
/* SOC_STM32F429AI is not set */
/* SOC_STM32F429ZE is not set */
/* SOC_STM32F410RB is not set */
/* SOC_STM32F437ZG is not set */
/* SOC_STM32F417VG is not set */
/* SOC_STM32F401RD is not set */
/* SOC_STM32F439ZG is not set */
/* SOC_STM32F427II is not set */
/* SOC_STM32F401RE is not set */
/* SOC_STM32F439II is not set */
/* SOC_STM32F479ZI is not set */
/* SOC_STM32F405OE is not set */
/* SOC_STM32F427ZG is not set */
/* SOC_STM32F446RE is not set */
/* SOC_STM32F427VG is not set */
/* SOC_STM32F469BI is not set */
/* SOC_STM32F429NE is not set */
/* SOC_STM32F439NI is not set */
/* SOC_STM32F479ZG is not set */
/* SOC_STM32F413ZG is not set */
/* SOC_STM32F429AG is not set */
/* SOC_STM32F423ZH is not set */
/* SOC_STM32F479IG is not set */
/* SOC_STM32F407ZG is not set */
/* SOC_STM32F429NI is not set */
/* SOC_STM32F479NG is not set */
/* SOC_STM32F405ZG is not set */
/* SOC_STM32F413MH is not set */
/* SOC_STM32F446VC is not set */
/* SOC_STM32F429ZG is not set */
/* SOC_STM32F479AG is not set */
/* SOC_STM32F427AG is not set */
/* SOC_STM32F415RG is not set */
/* SOC_STM32F469ZG is not set */
/* SOC_STM32F429IG is not set */
/* SOC_STM32F479BG is not set */
/* SOC_STM32F407VE is not set */
/* SOC_STM32F469BG is not set */
/* SOC_STM32F446ZC is not set */
/* SOC_STM32F401VC is not set */
/* SOC_STM32F411CE is not set */
/* SOC_STM32F413RH is not set */
/* SOC_STM32F469NE is not set */
/* SOC_STM32F413ZH is not set */
/* SOC_STM32F469VG is not set */
/* SOC_STM32F412CG is not set */
/* SOC_STM32F479BI is not set */
/* SOC_STM32F423MH is not set */
/* SOC_STM32F469AG is not set */
/* SOC_STM32F427AI is not set */
/* SOC_STM32F423RH is not set */
/* SOC_STM32F407ZE is not set */
/* SOC_STM32F401VE is not set */
/* SOC_STM32F412CE is not set */
/* SOC_STM32F479NI is not set */
/* SOC_STM32F410C8 is not set */
/* SOC_STM32F469BE is not set */
/* SOC_STM32F411RE is not set */
/* SOC_STM32F405RG is not set */
/* SOC_STM32F469NI is not set */
/* SOC_STM32F437AI is not set */
/* SOC_STM32F446ME is not set */
/* SOC_STM32F407VG is not set */
/* SOC_STM32F429BG is not set */
/* SOC_STM32F446MC is not set */
/* SOC_STM32F469NG is not set */
/* SOC_STM32F429VI is not set */
/* SOC_STM32F437ZI is not set */
/* SOC_STM32F401RB is not set */
/* SOC_STM32F415OG is not set */
/* SOC_STM32F413MG is not set */
/* SOC_STM32F415ZG is not set */
/* SOC_STM32F733ZE is not set */
/* SOC_STM32F765ZI is not set */
/* SOC_STM32F777BI is not set */
/* SOC_STM32F723IC is not set */
/* SOC_STM32F756IG is not set */
/* SOC_STM32F767VI is not set */
/* SOC_STM32F769BI is not set */
/* SOC_STM32F723ZE is not set */
/* SOC_STM32F723ZC is not set */
/* SOC_STM32F746NG is not set */
/* SOC_STM32F769IG is not set */
/* SOC_STM32F779II is not set */
/* SOC_STM32F756ZG is not set */
/* SOC_STM32F756NG is not set */
/* SOC_STM32F722ZC is not set */
/* SOC_STM32F779AI is not set */
/* SOC_STM32F722VE is not set */
/* SOC_STM32F756BG is not set */
/* SOC_STM32F767NG is not set */
/* SOC_STM32F732IE is not set */
/* SOC_STM32F765BI is not set */
/* SOC_STM32F767VG is not set */
/* SOC_STM32F746IG is not set */
/* SOC_STM32F777VI is not set */
/* SOC_STM32F765NI is not set */
/* SOC_STM32F722RE is not set */
/* SOC_STM32F745VG is not set */
/* SOC_STM32F746ZG is not set */
/* SOC_STM32F722IE is not set */
/* SOC_STM32F767NI is not set */
/* SOC_STM32F746BE is not set */
/* SOC_STM32F746ZE is not set */
/* SOC_STM32F779BI is not set */
/* SOC_STM32F767IG is not set */
/* SOC_STM32F723IE is not set */
/* SOC_STM32F746IE is not set */
/* SOC_STM32F768AI is not set */
/* SOC_STM32F746VE is not set */
/* SOC_STM32F745ZE is not set */
/* SOC_STM32F745IE is not set */
/* SOC_STM32F750N8 is not set */
/* SOC_STM32F733VE is not set */
/* SOC_STM32F746VG is not set */
/* SOC_STM32F769AI is not set */
/* SOC_STM32F732VE is not set */
/* SOC_STM32F722IC is not set */
/* SOC_STM32F730R8 is not set */
/* SOC_STM32F765NG is not set */
/* SOC_STM32F745IG is not set */
/* SOC_STM32F765IG is not set */
/* SOC_STM32F769II is not set */
/* SOC_STM32F730Z8 is not set */
/* SOC_STM32F722VC is not set */
/* SOC_STM32F732ZE is not set */
/* SOC_STM32F746NE is not set */
/* SOC_STM32F767BI is not set */
/* SOC_STM32F769NI is not set */
/* SOC_STM32F750Z8 is not set */
/* SOC_STM32F767II is not set */
/* SOC_STM32F723VE is not set */
/* SOC_STM32F750V8 is not set */
/* SOC_STM32F769AG is not set */
/* SOC_STM32F769NG is not set */
/* SOC_STM32F722ZE is not set */
/* SOC_STM32F777NI is not set */
/* SOC_STM32F765VI is not set */
/* SOC_STM32F745VE is not set */
/* SOC_STM32F756VG is not set */
/* SOC_STM32F722RC is not set */
/* SOC_STM32F765BG is not set */
/* SOC_STM32F777ZI is not set */
/* SOC_STM32F730I8 is not set */
/* SOC_STM32F765VG is not set */
/* SOC_STM32F765ZG is not set */
/* SOC_STM32F745ZG is not set */
/* SOC_STM32F778AI is not set */
/* SOC_STM32F769BG is not set */
/* SOC_STM32F779NI is not set */
/* SOC_STM32F767BG is not set */
/* SOC_STM32F777II is not set */
/* SOC_STM32F765II is not set */
/* SOC_STM32F767ZI is not set */
/* SOC_STM32F746BG is not set */
/* SOC_STM32F733IE is not set */
/* SOC_STM32F730V8 is not set */
/* SOC_STM32F767ZG is not set */
/* SOC_STM32F732RE is not set */
/* SOC_STM32H743XI is not set */
/* SOC_STM32H743ZI is not set */
/* SOC_STM32H743II is not set */
/* SOC_STM32H753AG is not set */
/* SOC_STM32H753VG is not set */
/* SOC_STM32H753XI is not set */
/* SOC_STM32H743VI is not set */
/* SOC_STM32H750VB is not set */
/* SOC_STM32H743VG is not set */
/* SOC_STM32H743AI is not set */
/* SOC_STM32H753BI is not set */
/* SOC_STM32H743AG is not set */
/* SOC_STM32H753ZI is not set */
/* SOC_STM32H753AI is not set */
/* SOC_STM32H750XB is not set */
/* SOC_STM32H750IB is not set */
/* SOC_STM32H753II is not set */
/* SOC_STM32H753VI is not set */
/* SOC_STM32H743BI is not set */
/* SOC_STM32L071KZ is not set */
/* SOC_STM32L051T6 is not set */
/* SOC_STM32L051R8 is not set */
/* SOC_STM32L052C8 is not set */
/* SOC_STM32L021D4 is not set */
/* SOC_STM32L031K6 is not set */
/* SOC_STM32L051K6 is not set */
/* SOC_STM32L011F3 is not set */
/* SOC_STM32L021K4 is not set */
/* SOC_STM32L072RZ is not set */
/* SOC_STM32L031F6 is not set */
/* SOC_STM32L072KB is not set */
/* SOC_STM32L071CB is not set */
/* SOC_STM32L062K8 is not set */
/* SOC_STM32L071K8 is not set */
/* SOC_STM32L011D4 is not set */
/* SOC_STM32L071C8 is not set */
/* SOC_STM32L083VZ is not set */
/* SOC_STM32L072RB is not set */
/* SOC_STM32L031E4 is not set */
/* SOC_STM32L021G4 is not set */
/* SOC_STM32L072CB is not set */
/* SOC_STM32L083CZ is not set */
/* SOC_STM32L072CZ is not set */
/* SOC_STM32L041K6 is not set */
/* SOC_STM32L011F4 is not set */
/* SOC_STM32L051R6 is not set */
/* SOC_STM32L053R8 is not set */
/* SOC_STM32L052R8 is not set */
/* SOC_STM32L041G6 is not set */
/* SOC_STM32L031G6 is not set */
/* SOC_STM32L041C4 is not set */
/* SOC_STM32L052T8 is not set */
/* SOC_STM32L071RZ is not set */
/* SOC_STM32L073V8 is not set */
/* SOC_STM32L072V8 is not set */
/* SOC_STM32L082CZ is not set */
/* SOC_STM32L072VZ is not set */
/* SOC_STM32L041C6 is not set */
/* SOC_STM32L083RB is not set */
/* SOC_STM32L071RB is not set */
/* SOC_STM32L053C6 is not set */
/* SOC_STM32L031C4 is not set */
/* SOC_STM32L021F4 is not set */
/* SOC_STM32L072VB is not set */
/* SOC_STM32L011K4 is not set */
/* SOC_STM32L011G3 is not set */
/* SOC_STM32L041F6 is not set */
/* SOC_STM32L051C6 is not set */
/* SOC_STM32L071CZ is not set */
/* SOC_STM32L083RZ is not set */
/* SOC_STM32L073VB is not set */
/* SOC_STM32L073RZ is not set */
/* SOC_STM32L071V8 is not set */
/* SOC_STM32L083VB is not set */
/* SOC_STM32L082KZ is not set */
/* SOC_STM32L031F4 is not set */
/* SOC_STM32L031E6 is not set */
/* SOC_STM32L052C6 is not set */
/* SOC_STM32L071VB is not set */
/* SOC_STM32L011K3 is not set */
/* SOC_STM32L073CB is not set */
/* SOC_STM32L031K4 is not set */
/* SOC_STM32L073RB is not set */
/* SOC_STM32L063C8 is not set */
/* SOC_STM32L053C8 is not set */
/* SOC_STM32L051K8 is not set */
/* SOC_STM32L073VZ is not set */
/* SOC_STM32L063R8 is not set */
/* SOC_STM32L081CZ is not set */
/* SOC_STM32L052R6 is not set */
/* SOC_STM32L053R6 is not set */
/* SOC_STM32L071VZ is not set */
/* SOC_STM32L083V8 is not set */
/* SOC_STM32L052K8 is not set */
/* SOC_STM32L072KZ is not set */
/* SOC_STM32L011D3 is not set */
/* SOC_STM32L083CB is not set */
/* SOC_STM32L082KB is not set */
/* SOC_STM32L081KZ is not set */
/* SOC_STM32L031G4 is not set */
/* SOC_STM32L052K6 is not set */
/* SOC_STM32L071KB is not set */
/* SOC_STM32L031C6 is not set */
/* SOC_STM32L011E4 is not set */
/* SOC_STM32L011G4 is not set */
/* SOC_STM32L041E6 is not set */
/* SOC_STM32L051T8 is not set */
/* SOC_STM32L052T6 is not set */
/* SOC_STM32L051C8 is not set */
/* SOC_STM32L073CZ is not set */
/* SOC_STM32L152ZD is not set */
/* SOC_STM32L152ZE is not set */
/* SOC_STM32L152C8xxA is not set */
/* SOC_STM32L152R6xxA is not set */
/* SOC_STM32L152ZC is not set */
/* SOC_STM32L152R8xxA is not set */
/* SOC_STM32L100R8 is not set */
/* SOC_STM32L151VE is not set */
/* SOC_STM32L151VD is not set */
/* SOC_STM32L151VC is not set */
/* SOC_STM32L151VB is not set */
/* SOC_STM32L100RC is not set */
/* SOC_STM32L100RB is not set */
/* SOC_STM32L151RC is not set */
/* SOC_STM32L151RB is not set */
/* SOC_STM32L152CC is not set */
/* SOC_STM32L152CB is not set */
/* SOC_STM32L151RE is not set */
/* SOC_STM32L151RD is not set */
/* SOC_STM32L151ZC is not set */
/* SOC_STM32L162QD is not set */
/* SOC_STM32L151ZE is not set */
/* SOC_STM32L151ZD is not set */
/* SOC_STM32L152RD is not set */
/* SOC_STM32L152RE is not set */
/* SOC_STM32L151CB is not set */
/* SOC_STM32L151CC is not set */
/* SOC_STM32L152VBxxA is not set */
/* SOC_STM32L152RB is not set */
/* SOC_STM32L152RC is not set */
/* SOC_STM32L151R8xxA is not set */
/* SOC_STM32L152VB is not set */
/* SOC_STM32L152V8xxA is not set */
/* SOC_STM32L152RBxxA is not set */
/* SOC_STM32L151CBxxA is not set */
/* SOC_STM32L100RBxxA is not set */
/* SOC_STM32L100R8xxA is not set */
/* SOC_STM32L151RCxxA is not set */
/* SOC_STM32L162RCxxA is not set */
/* SOC_STM32L151V8xxA is not set */
/* SOC_STM32L151RBxxA is not set */
/* SOC_STM32L151C8xxA is not set */
/* SOC_STM32L151C6xxA is not set */
/* SOC_STM32L151VCxxA is not set */
/* SOC_STM32L152VCxxA is not set */
/* SOC_STM32L162VCxxA is not set */
/* SOC_STM32L152CBxxA is not set */
/* SOC_STM32L151C8 is not set */
/* SOC_STM32L151QC is not set */
/* SOC_STM32L100C6xxA is not set */
/* SOC_STM32L152R8 is not set */
/* SOC_STM32L151QD is not set */
/* SOC_STM32L151QE is not set */
/* SOC_STM32L162ZE is not set */
/* SOC_STM32L162ZD is not set */
/* SOC_STM32L152R6 is not set */
/* SOC_STM32L151VBxxA is not set */
/* SOC_STM32L151R6xxA is not set */
/* SOC_STM32L151C6 is not set */
/* SOC_STM32L162RE is not set */
/* SOC_STM32L162RD is not set */
/* SOC_STM32L152QC is not set */
/* SOC_STM32L151R8 is not set */
/* SOC_STM32L152QE is not set */
/* SOC_STM32L152QD is not set */
/* SOC_STM32L162RC is not set */
/* SOC_STM32L151R6 is not set */
/* SOC_STM32L152V8 is not set */
/* SOC_STM32L152C6 is not set */
/* SOC_STM32L152C8 is not set */
/* SOC_STM32L100C6 is not set */
/* SOC_STM32L151UC is not set */
/* SOC_STM32L151V8 is not set */
/* SOC_STM32L162VC is not set */
/* SOC_STM32L152VC is not set */
/* SOC_STM32L162VE is not set */
/* SOC_STM32L162VD is not set */
/* SOC_STM32L152C6xxA is not set */
/* SOC_STM32L152VD is not set */
/* SOC_STM32L152RCxxA is not set */
/* SOC_STM32L152VE is not set */
/* SOC_STM32L475QE is not set */
/* SOC_STM32L476JE is not set */
/* SOC_STM32L471JG is not set */
/* SOC_STM32L475RE is not set */
/* SOC_STM32L4R5ZI is not set */
/* SOC_STM32L431RB is not set */
/* SOC_STM32L4R9ZI is not set */
/* SOC_STM32L433VC is not set */
/* SOC_STM32L432KC is not set */
/* SOC_STM32L451VC is not set */
/* SOC_STM32L486QG is not set */
/* SOC_STM32L476QE is not set */
/* SOC_STM32L451RE is not set */
/* SOC_STM32L451CC is not set */
/* SOC_STM32L443VC is not set */
/* SOC_STM32L433RC is not set */
/* SOC_STM32L4S7ZI is not set */
/* SOC_STM32L431CC is not set */
/* SOC_STM32L431RC is not set */
/* SOC_STM32L433RB is not set */
/* SOC_STM32L433CB is not set */
/* SOC_STM32L4S9VI is not set */
/* SOC_STM32L496RG is not set */
/* SOC_STM32L431VC is not set */
/* SOC_STM32L475JE is not set */
/* SOC_STM32L476RC is not set */
/* SOC_STM32L451RC is not set */
/* SOC_STM32L452VE is not set */
/* SOC_STM32L476ZG is not set */
/* SOC_STM32L486ZG is not set */
/* SOC_STM32L4R7ZI is not set */
/* SOC_STM32L4S5ZI is not set */
/* SOC_STM32L471VG is not set */
/* SOC_STM32L462RE is not set */
/* SOC_STM32L4S9ZI is not set */
/* SOC_STM32L471RE is not set */
/* SOC_STM32L475ZE is not set */
/* SOC_STM32L433CC is not set */
/* SOC_STM32L4S7VI is not set */
/* SOC_STM32L4R7AI is not set */
/* SOC_STM32L4A6RG is not set */
/* SOC_STM32L4R5VI is not set */
/* SOC_STM32L486VG is not set */
/* SOC_STM32L4R9VI is not set */
/* SOC_STM32L452RE is not set */
/* SOC_STM32L4R5AI is not set */
/* SOC_STM32L431CB is not set */
/* SOC_STM32L471ZE is not set */
/* SOC_STM32L471VC is not set */
/* SOC_STM32L443RC is not set */
/* SOC_STM32L4A6VG is not set */
/* SOC_STM32L462VE is not set */
/* SOC_STM32L475VG is not set */
/* SOC_STM32L496ZG is not set */
/* SOC_STM32L471RC is not set */
/* SOC_STM32L476MG is not set */
/* SOC_STM32L4A6ZG is not set */
/* SOC_STM32L471RG is not set */
/* SOC_STM32L471QG is not set */
/* SOC_STM32L471QE is not set */
/* SOC_STM32L476ME is not set */
/* SOC_STM32L475RC is not set */
/* SOC_STM32L496QG is not set */
/* SOC_STM32L475RG is not set */
/* SOC_STM32L476VC is not set */
/* SOC_STM32L431KB is not set */
/* SOC_STM32L4R7VI is not set */
/* SOC_STM32L476JG is not set */
/* SOC_STM32L476VG is not set */
/* SOC_STM32L486JG is not set */
/* SOC_STM32L4S9AI is not set */
/* SOC_STM32L462CE is not set */
/* SOC_STM32L471JE is not set */
/* SOC_STM32L4S5AI is not set */
/* SOC_STM32L4S7AI is not set */
/* SOC_STM32L4A6AG is not set */
/* SOC_STM32L443CC is not set */
/* SOC_STM32L476QG is not set */
/* SOC_STM32L4A6QG is not set */
/* SOC_STM32L496VG is not set */
/* SOC_STM32L476RE is not set */
/* SOC_STM32L452RC is not set */
/* SOC_STM32L452VC is not set */
/* SOC_STM32L4S5QI is not set */
/* SOC_STM32L451VE is not set */
/* SOC_STM32L451CE is not set */
/* SOC_STM32L475JG is not set */
/* SOC_STM32L4R5QI is not set */
/* SOC_STM32L486RG is not set */
/* SOC_STM32L476ZE is not set */
/* SOC_STM32L475ZG is not set */
/* SOC_STM32L432KB is not set */
/* SOC_STM32L4S5VI is not set */
/* SOC_STM32L476VE is not set */
/* SOC_STM32L471VE is not set */
/* SOC_STM32L442KC is not set */
/* SOC_STM32L431KC is not set */
/* SOC_STM32L476RG is not set */
/* SOC_STM32L496AG is not set */
/* SOC_STM32L485JG is not set */
/* SOC_STM32L475VE is not set */
/* SOC_STM32L475QG is not set */
/* SOC_STM32L4R9AI is not set */
/* SOC_STM32L471ZG is not set */
/* SOC_STM32L475VC is not set */
/* SOC_STM32L452CC is not set */
/* SOC_STM32L452CE is not set */
/* BSP_USING_HSI is not set */
#define BSP_HSE_VALUE 8000000
#define BSP_HSE_HCLK 84000000

/* Using UART */

#define BSP_USING_UART1
/* BSP_USING_UART2 is not set */
/* BSP_USING_UART6 is not set */

/* Using SPI */

/* BSP_USING_SPI1 is not set */
/* BSP_USING_SPI2 is not set */
/* RT_USING_SPI3 is not set */

/* Using I2C */

/* BSP_USING_I2C1 is not set */
/* BSP_USING_I2C2 is not set */
/* BSP_USING_I2C3 is not set */
/* BSP_USING_RTC is not set */
/* BSP_USING_WDT is not set */

#endif
