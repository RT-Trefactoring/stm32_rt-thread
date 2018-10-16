import os
try:
    import xlrd
except:
    os.system('pip install xlrd')
    import xlrd
try:
    import requests
except:
    os.system('pip install requests')
    import requests
from xml.dom.minidom import parse
import xml.dom.minidom

def DownloadFile(path, url, replace = False):
    if not replace:
        if os.path.exists(path):
            return
    r = requests.get(url)
    if r:
        f = open(path,'wb')
        if f:
            f.write(r.content)
            f.close()
        r.close()

def DownloadPDSC2Tools(PackageName):
    DownloadFile('tools/' + PackageName + '.pdsc', 'http://stm32list.oss-cn-hangzhou.aliyuncs.com/pdsc/' + PackageName + '.pdsc')

def DownloadXLSX2Tools(ListName):
    DownloadFile('tools/' + ListName + '.xlsx', 'http://stm32list.oss-cn-hangzhou.aliyuncs.com/xlsx_list/' + ListName + '.xlsx?raw=true')

pdscTable = [
    'Keil.STM32L4xx_DFP',
    'Keil.STM32L1xx_DFP',
    'Keil.STM32L0xx_DFP',
    'Keil.STM32H7xx_DFP',
    'Keil.STM32F7xx_DFP',
    'Keil.STM32F4xx_DFP',
    'Keil.STM32F3xx_DFP',
    'Keil.STM32F2xx_DFP',
    'Keil.STM32F1xx_DFP',
    'Keil.STM32F0xx_DFP',
]

xlsxTable = [
    'stm32_l1',
    'stm32_l4',
    'stm32_l0',
    'stm32_h7',
    'stm32_f7',
    'stm32_f4',
    'stm32_f3',
    'stm32_f2',
    'stm32_f1',
    'stm32_f0',
]
        
def DownloadPDSC():
    for p in pdscTable:
        DownloadPDSC2Tools(p)



def DownloadXLSX():
    for x in xlsxTable:
        DownloadXLSX2Tools(x)
    

def CreateKconfig(filename,dependson,dic):
    context_kconfig = "choice\n"
    context_kconfig += "    prompt \"Chip Name\"\n"
    context_kconfig += '    depends on ' + dependson + '\n'
    context_kconfig_chipname = ""
    for d in dic:
        context_kconfig += '    config CHIP_' + d + '\n'
        context_kconfig += '        bool \"' + d + '\"\n'
        context_kconfig += '        select SOC_' + dic[d]['SOC'] + '\n'
        context_kconfig_chipname += 'config SOC_' + dic[d]['SOC'] + '\n'
        context_kconfig_chipname += '    bool\n'
        context_kconfig_chipname += '    default n\n'
    context_kconfig += 'endchoice\n'
    context_kconfig += context_kconfig_chipname
    with open(filename,'w') as f:
        f.write(context_kconfig)

def RefreshSTM32List():
    DownloadPDSC()
    DownloadXLSX()
    DeviceDic_L4 = CreateDeviceDic('tools/Keil.STM32L4xx_DFP.pdsc')
    CreateKconfig('config/l4_Kconfig','SOC_STM32L4',DeviceDic_L4)
    DeviceDic = DeviceDic_L4
    DeviceDic_L1 = CreateDeviceDic('tools/Keil.STM32L1xx_DFP.pdsc')
    CreateKconfig('config/l1_Kconfig','SOC_STM32L1',DeviceDic_L1)
    DeviceDic.update(DeviceDic_L1)
    DeviceDic_L0 = CreateDeviceDic('tools/Keil.STM32L0xx_DFP.pdsc')
    CreateKconfig('config/l0_Kconfig','SOC_STM32H7',DeviceDic_L0)
    DeviceDic.update(DeviceDic_L0)
    DeviceDic_H7 = CreateDeviceDic('tools/Keil.STM32H7xx_DFP.pdsc')
    CreateKconfig('config/h7_Kconfig','SOC_STM32H7',DeviceDic_H7)
    DeviceDic.update(DeviceDic_H7)
    DeviceDic_F7 = CreateDeviceDic('tools/Keil.STM32F7xx_DFP.pdsc')
    CreateKconfig('config/f7_Kconfig','SOC_STM32F7',DeviceDic_F7)
    DeviceDic.update(DeviceDic_F7)
    DeviceDic_F4 = CreateDeviceDic('tools/Keil.STM32F4xx_DFP.pdsc')
    CreateKconfig('config/f4_Kconfig','SOC_STM32F4',DeviceDic_F4)
    DeviceDic.update(DeviceDic_F4)
    DeviceDic_F3 = CreateDeviceDic('tools/Keil.STM32F3xx_DFP.pdsc')
    CreateKconfig('config/f3_Kconfig','SOC_STM32F3',DeviceDic_F3)
    DeviceDic.update(DeviceDic_F3)
    DeviceDic_F2 = CreateDeviceDic('tools/Keil.STM32F2xx_DFP.pdsc')
    CreateKconfig('config/f2_Kconfig','SOC_STM32F2',DeviceDic_F2)
    DeviceDic.update(DeviceDic_F2)
    DeviceDic_F1 = CreateDeviceDic('tools/Keil.STM32F1xx_DFP.pdsc')
    CreateKconfig('config/f1_Kconfig','SOC_STM32F1',DeviceDic_F1)
    DeviceDic.update(DeviceDic_F1)
    DeviceDic_F0 = CreateDeviceDic('tools/Keil.STM32F0xx_DFP.pdsc')
    CreateKconfig('config/f0_Kconfig','SOC_STM32F0',DeviceDic_F0)
    DeviceDic.update(DeviceDic_F0)

    context = "DeviceDic = "
    context += str(DeviceDic)
    with open('tools/soc_config.py','w') as f:
        f.write(context)
    context_pin_get = "from building import *\n"
    context_pin_get += "\n"
    context_pin_get += "def get_pin_num():\n"
    context_pin_get += "    pin = 0\n"
    context_pin_get += generate_pin_config('tools/stm32_l4.xlsx', True)
    context_pin_get += generate_pin_config('tools/stm32_l1.xlsx')
    context_pin_get += generate_pin_config('tools/stm32_l0.xlsx')
    context_pin_get += generate_pin_config('tools/stm32_h7.xlsx')
    context_pin_get += generate_pin_config('tools/stm32_f7.xlsx')
    context_pin_get += generate_pin_config('tools/stm32_f4.xlsx')
    context_pin_get += generate_pin_config('tools/stm32_f3.xlsx')
    context_pin_get += generate_pin_config('tools/stm32_f2.xlsx')
    context_pin_get += generate_pin_config('tools/stm32_f1.xlsx')
    context_pin_get += generate_pin_config('tools/stm32_f0.xlsx')
    context_pin_get += '    return pin'
    with open('tools/pin_get.py', "w") as f:
        f.write(context_pin_get)


import re
def CreateDeviceDic(pdsc):
    DeviceDic = {}
    Document = xml.dom.minidom.parse(pdsc)
    Elements = Document.getElementsByTagName('release')
    pack_name = re.search(r'([^<>/\\\|:""\*\?]+)\.\w+$', pdsc, re.M|re.I)
    mdk_pack_version = pack_name.group(1) + '.' + Elements[0].getAttribute('version')
    
    Elements = Document.getElementsByTagName('processor')
    for c in Elements:
        if c.hasAttribute('Dcore'):
            CPU_CORE = c.getAttribute('Dcore')
            break
    Elements = Document.getElementsByTagName('device')
    for e in Elements:
        soc_dname = e.getAttribute('Dname')
        debugs = e.getElementsByTagName('debug')
        if len(debugs) > 0:
            svd = debugs[0].getAttribute('svd')
        else:
            supper = e.parentNode
            debugs = supper.getElementsByTagName('debug')
            if len(debugs) > 0:
                svd = debugs[0].getAttribute('svd')
            else:
                supper = supper.parentNode
                debugs = supper.getElementsByTagName('debug')
                if len(debugs) > 0:
                    svd = debugs[0].getAttribute('svd')
        flms = e.getElementsByTagName('algorithm')
        flm = []
        for f in flms:
            if f.getAttribute('default') == '1':
                _flm = {}
                _flm['Path'] = f.getAttribute('name')
                name = re.search(r'([^<>/\\\|:""\*\?]+)\.\w+$', _flm['Path'], re.M|re.I)
                _flm['Name'] = name.group(1)
                _flm['Start'] = int(f.getAttribute('start'),16)
                _flm['Size'] = int(f.getAttribute('size'),16)
                flm += [_flm]
        memorys = e.getElementsByTagName('memory')
        ccm_base = 0x10000000
        ccm_size = 0x0
        ram_base = 0x20000000
        ram_size = 0x10000
        rom_base = 0x8000000
        rom_size = 0x20000
        for memory in memorys:
            if memory.getAttribute('id') == 'IROM1':
                rom_base = int(memory.getAttribute('start'),16)
                rom_size = int(memory.getAttribute('size'),16)
            if memory.getAttribute('id') == 'IRAM1':
                ram_base = int(memory.getAttribute('start'),16)
                ram_size = int(memory.getAttribute('size'),16)
            if memory.getAttribute('id') == 'IRAM2':
                ccm_base = int(memory.getAttribute('start'),16)
                ccm_size = int(memory.getAttribute('size'),16)
        variants = e.getElementsByTagName('variant')
        if variants:
            for v in variants:
                chip_name = v.getAttribute('Dvariant')
                DeviceDic[chip_name] = {'SOC' : soc_dname}
                DeviceDic[chip_name]['FLM'] = flm
                DeviceDic[chip_name]['ROM_BASE'] = rom_base
                DeviceDic[chip_name]['ROM_SIZE'] = rom_size
                DeviceDic[chip_name]['RAM_BASE'] = ram_base
                DeviceDic[chip_name]['RAM_SIZE'] = ram_size
                DeviceDic[chip_name]['CCM_BASE'] = ccm_base
                DeviceDic[chip_name]['CCM_SIZE'] = ccm_size
                DeviceDic[chip_name]['CPU_CORE'] = CPU_CORE
                DeviceDic[chip_name]['SVD'] = svd
                DeviceDic[chip_name]['MDK_PACK'] = mdk_pack_version
        else:
            chip_name = soc_dname
            DeviceDic[chip_name] = {'SOC' : soc_dname}
            DeviceDic[chip_name]['FLM'] = flm
            DeviceDic[chip_name]['ROM_BASE'] = rom_base
            DeviceDic[chip_name]['ROM_SIZE'] = rom_size
            DeviceDic[chip_name]['RAM_BASE'] = ram_base
            DeviceDic[chip_name]['RAM_SIZE'] = ram_size
            DeviceDic[chip_name]['CCM_BASE'] = ccm_base
            DeviceDic[chip_name]['CCM_SIZE'] = ccm_size
            DeviceDic[chip_name]['CPU_CORE'] = CPU_CORE
            DeviceDic[chip_name]['SVD'] = svd
            DeviceDic[chip_name]['MDK_PACK'] = mdk_pack_version
    return DeviceDic

pkg2pin_dict = {}
pkg2pin_dict['UFQFPN48']=48
pkg2pin_dict['UFQFPN48 (7x7mm)'] = 48
pkg2pin_dict['WLCSP49']=48
pkg2pin_dict['WLCSP90']=81
pkg2pin_dict['WLCSP81']=81
pkg2pin_dict['WLCSP64']=64
pkg2pin_dict['WLCSP49']=48
pkg2pin_dict['WLCSP36']=36
pkg2pin_dict['WLCSP168']=168
pkg2pin_dict['WLCSP143']=144
pkg2pin_dict['UFQFPN48']=48
pkg2pin_dict['UFBGA64']=64
pkg2pin_dict['UFBGA176']=176
pkg2pin_dict['UFBGA169']=168
pkg2pin_dict['UFBGA144']=144
pkg2pin_dict['UFBGA100']=100
pkg2pin_dict['TFBGA216']=216
pkg2pin_dict['LQFP64']=64
pkg2pin_dict['LQFP48']=48
pkg2pin_dict['LQFP208']=208
pkg2pin_dict['LQFP176']=176
pkg2pin_dict['LQFP144']=144
pkg2pin_dict['LQFP100']=100
pkg2pin_dict['UFQFPN32']=32
pkg2pin_dict['UFBGA132']=132
pkg2pin_dict['WLCSP72']=72
pkg2pin_dict['WLCSP100']=100
pkg2pin_dict['WLCSP144']=144
pkg2pin_dict['TFBGA64']=64
pkg2pin_dict['WLCSP63']=64
pkg2pin_dict['WLCSP104']=104
pkg2pin_dict['TSSOP14']=14
pkg2pin_dict['WLCSP25']=25
pkg2pin_dict['TSSOP20']=20
pkg2pin_dict['UFQFPN20']=20
pkg2pin_dict['UFQFPN28']=28
pkg2pin_dict['LQFP32']=32
pkg2pin_dict['EWLCSP49']=48
pkg2pin_dict['TFBGA100']=100
pkg2pin_dict['TFBGA240']=240
pkg2pin_dict['WLCSP180']=180
pkg2pin_dict['WLCSP66']=64
pkg2pin_dict['EWLCSP66']=66
pkg2pin_dict['VFQFPN36']=36
pkg2pin_dict['LFBGA100']=100
pkg2pin_dict['LFBGA144']=100
pkg2pin_dict['UFBGA144 (10x10mm)'] = 100


def generate_pin_config(xlsx, isfirst = False):
    try:
        workbook = xlrd.open_workbook(xlsx)
    except:
        print('no file ' + xlsx)
        exit(-1)
    sheet = workbook.sheet_by_name('List')
    first = isfirst
    context_pin_get = ''
    for i in range(sheet.nrows):
        row = sheet.row_values(i)
        if row[1] != '' and row[0] != 'Part No':
            if first:
                first = False
                context_pin_get += '    if GetDepend([\'SOC_' + row[0] + '\']):\n'
            else:
                context_pin_get += '    elif GetDepend([\'SOC_' + row[0] + '\']):\n'
            context_pin_get += '        pin = ' + str(pkg2pin_dict[row[5]]) + '\n'
    return context_pin_get
    


def icf_config(rom_base, rom_size, ram_base, ram_size, filename):
    context = ""
    with open(filename, "r") as f:
        for line in f:
            if '__ICFEDIT_intvec_start__' in line:
                context += 'define symbol __ICFEDIT_intvec_start__ = ' + hex(rom_base) + ';\n'
            elif '__ICFEDIT_region_ROM_start__' in line:
                context += 'define symbol __ICFEDIT_region_ROM_start__ = ' + hex(rom_base) + ';\n'
            elif '__ICFEDIT_region_ROM_end__' in line:
                context += 'define symbol __ICFEDIT_region_ROM_end__ = ' + hex(rom_base + rom_size - 1) + ';\n'
            elif '__ICFEDIT_region_RAM_start__' in line:
                context += 'define symbol __ICFEDIT_region_RAM_start__ = ' + hex(ram_base) + ';\n'
            elif '__ICFEDIT_region_RAM_end__' in line:
                context += 'define symbol __ICFEDIT_region_RAM_end__ = ' + hex(ram_base + ram_size - 1) + ';\n'
            else:
                context += line
    with open(filename,"w") as f:
        f.write(context)

def ld_config(rom_base, rom_size, ram_base, ram_size, filename):
    context = ""
    with open(filename, "r") as f:
        for line in f:
            if 'CODE' in line and 'ORIGIN' in line:
                context += '    CODE (rx) : ORIGIN = ' + hex(rom_base) + ', LENGTH = ' + str(rom_size/1024) + 'k /* ' + str(rom_size/1024) + 'KB flash */\n'
            elif 'DATA' in line and 'ORIGIN' in line:
                context += '    DATA (rw) : ORIGIN = ' + hex(ram_base) + ', LENGTH = ' + str(ram_size/1024) + 'k /* ' + str(ram_size/1024) + 'KB ram */\n'
            else:
                context += line
    with open(filename,"w") as f:
        f.write(context)

def sct_config(rom_base, rom_size, ram_base, ram_size, filename):
    context = ""
    with open(filename, "r") as f:
        for line in f:
            if 'LR_IROM1' in line:
                context += 'LR_IROM1 ' + hex(rom_base) + ' ' + hex(rom_size) + '  {    ; load region size_region\n'
            elif 'ER_IROM1' in line:
                context += '  ER_IROM1 ' + hex(rom_base) + ' ' + hex(rom_size) + '  {  ; load address = execution address\n'
            elif 'RW_IRAM1' in line:
                context += '  RW_IRAM1 ' + hex(ram_base) + ' ' + hex(ram_size) + '  {  ; RW data\n'
            else:
                context += line
    with open(filename,"w") as f:
        f.write(context)

def mdk5_config(projfile,chip_config):
    Document = xml.dom.minidom.parse(projfile)
    Elements = Document.getElementsByTagName('Target')
    node = Document.createElement('TargetName')
    textnode = Document.createTextNode('rt-thread_' + chip_config['SOC'].lower())
    node.appendChild(textnode)
    old = Elements[0].getElementsByTagName('TargetName')
    Elements[0].replaceChild(node,old[0])

    Elements = Document.getElementsByTagName('TargetCommonOption')
    node = Document.createElement('Device')
    textnode = Document.createTextNode(chip_config['SOC'])
    node.appendChild(textnode)
    old = Elements[0].getElementsByTagName('Device')
    Elements[0].replaceChild(node,old[0])
    flash_driver = 'UL2CM3(-S0 -C0 -P0 -FD20000000 -FC1000 -FN' + str(len(chip_config['FLM']))
    for i in range(len(chip_config['FLM'])):
        flash_driver += ' -FF' + str(i) + chip_config['FLM'][i]['Name']
        flash_driver += ' -FS' + str(i) + hex(chip_config['FLM'][i]['Start']).replace('0x','')
        flash_driver += ' -FL' + str(i) + hex(chip_config['FLM'][i]['Size']).replace('0x','')
        flash_driver += ' -FP' + str(i) + '($$Device:' + chip_config['SOC'] + '$' + chip_config['FLM'][i]['Path']+')'
    node = Document.createElement('FlashDriverDll')
    textnode = Document.createTextNode(flash_driver)
    node.appendChild(textnode)
    old = Elements[0].getElementsByTagName('FlashDriverDll')
    Elements[0].replaceChild(node,old[0])
    if chip_config['CCM_SIZE'] == 0:
        cpu = 'IRAM(' + hex(chip_config['RAM_BASE']) + ',' + hex(chip_config['RAM_SIZE']) + ')'
        
    else:
        cpu = 'IRAM1(' + hex(chip_config['RAM_BASE']) + ',' + hex(chip_config['RAM_SIZE']) + ')'
        cpu += 'IRAM2(' + hex(chip_config['CCM_BASE']) + ',' + hex(chip_config['CCM_SIZE']) + ')'
    cpu += ' IROM(' + hex(chip_config['ROM_BASE']) + ',' + hex(chip_config['ROM_SIZE'])+')'
    cpu += ' CPUTYPE(\"' + chip_config['CPU_CORE'] + '\") FPU0 CLOCK(12000000) ELITTLE'

    node = Document.createElement('Cpu')
    textnode = Document.createTextNode(cpu)
    node.appendChild(textnode)
    old = Elements[0].getElementsByTagName('Cpu')
    Elements[0].replaceChild(node,old[0])

    node = Document.createElement('RegisterFile')
    old = Elements[0].getElementsByTagName('RegisterFile')
    Elements[0].replaceChild(node,old[0])

    SFDFile = '$$Device:' + chip_config['SOC'] + '$' + chip_config['SVD']

    node = Document.createElement('SFDFile')
    textnode = Document.createTextNode(SFDFile)
    node.appendChild(textnode)
    old = Elements[0].getElementsByTagName('SFDFile')
    Elements[0].replaceChild(node,old[0])

    node = Document.createElement('OutputName')
    textnode = Document.createTextNode('rt-thread_' + chip_config['SOC'].lower())
    node.appendChild(textnode)
    old = Elements[0].getElementsByTagName('OutputName')
    Elements[0].replaceChild(node,old[0])

    node = Document.createElement('PackID')
    textnode = Document.createTextNode(chip_config['MDK_PACK'])
    node.appendChild(textnode)
    old = Elements[0].getElementsByTagName('PackID')
    Elements[0].replaceChild(node,old[0])

    ArmAdsMiscs = Document.getElementsByTagName('ArmAdsMisc')
    node = Document.createElement('AdsCpuType')
    textnode = Document.createTextNode(chip_config['CPU_CORE'])
    node.appendChild(textnode)
    old = ArmAdsMiscs[0].getElementsByTagName('AdsCpuType')
    ArmAdsMiscs[0].replaceChild(node,old[0])

    with open(projfile,'w') as fh:  
            Document.writexml(fh) 


import sys
import os
try:
    from building import *
except:
    if os.getenv('RTT_ROOT'):
        RTT_ROOT = os.getenv('RTT_ROOT')
    else:
        RTT_ROOT = os.path.normpath(os.getcwd() + '/../..')
    sys.path = sys.path + [os.path.join(RTT_ROOT, 'tools')]
    try:
        from building import *
    except:
        print('Cannot found RT-Thread root directory, please check RTT_ROOT')
        print(RTT_ROOT)
        exit(-1)

def GetCPU():
    CPU_CORE = {}
    CPU_CORE['SOC_ARM_CM0'] = 'cortex-m0'
    CPU_CORE['SOC_ARM_CM0_P'] = 'cortex-m0'
    CPU_CORE['SOC_ARM_CM3'] = 'cortex-m3'
    CPU_CORE['SOC_ARM_CM4'] = 'cortex-m4'
    CPU_CORE['SOC_ARM_CM7'] = 'cortex-m7'
    PreProcessor = PatchedPreProcessor()
    f = file('rtconfig.h', 'r')
    contents = f.read()
    f.close()
    PreProcessor.process_contents(contents)
    rtOptions = PreProcessor.cpp_namespace
    for option in rtOptions.keys():
        if 'SOC_ARM' in option:
            chip_name = option
            break
    return CPU_CORE[chip_name]
