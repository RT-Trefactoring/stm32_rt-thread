import stm32_config_tools
import os
import sys
import re

def get_env_dir():
    if os.environ.get('ENV_ROOT'):
        return os.environ.get('ENV_ROOT')

    if sys.platform == 'win32':
        home_dir = os.environ['USERPROFILE']
        env_dir  = os.path.join(home_dir, '.env')
    else:
        home_dir = os.environ['HOME']
        env_dir  = os.path.join(home_dir, '.env')

    if not os.path.exists(env_dir):
        return None

    return env_dir

source_str = 'source "$PKGS_DIR/rtpkgs_sources/Kconfig"'

if __name__ == '__main__':
    stm32_config_tools.RefreshSTM32List()
    env_dir = get_env_dir()
    pkg_dir = os.path.join(env_dir, 'packages')
    os.environ['PKGS_ROOT'] = pkg_dir
    if not os.path.exists(os.path.join(pkg_dir, 'rtpkgs_sources')):
        os.system('git clone https://github.com/rtpkgs/rtpkgs_sources.git ' + os.path.join(pkg_dir, 'rtpkgs_sources'))
    try:
        found = False
        with open(os.path.join(pkg_dir, 'Kconfig'), 'r+') as f:
            for line in f:
                if source_str in line:
                    found = True
                    break
            if not found:
                f.seek(0,2)
                f.write(source_str + '\n')
    except:
        with open(os.path.join(pkg_dir, 'Kconfig'), 'w') as f:
            f.write('\n' + source_str + '\n')