# Build notes

## Local Build

### one time

```bash
paru -S python-pip
# needed? paru -S python-pip
# paru -S zephyr-sdk-bin -> better install a compatible version: https://docs.zephyrproject.org/4.1.0/develop/toolchains/zephyr_sdk.html#zephyr-sdk-version-compatibility
# checkout and pin zmk
mkdir ~/Development/github/
git clone https://github.com/AYM1607/zmk-driver-azoteq-iqs5xx ~/Development/github/AYM1607/zmk-driver-azoteq-iqs5xx
```

### then init with

```bash
source ~/Development/github/FearlessSpiff/ravensplit-zmk-config/scripts/initAndSetupBuildEnv.sh
# build left
west build -p -d build/left -b nice_nano_v2 -- -DSHIELD=ravensplit_left -DZMK_EXTRA_MODULES="/home/spiff/Development/github/AYM1607/zmk-driver-azoteq-iqs5xx;/home/spiff/Development/github/FearlessSpiff/ravensplit-zmk-config"

# build right
west build -p -d build/right -b nice_nano_v2 -- -DSHIELD=ravensplit_right -DZMK_EXTRA_MODULES="/home/spiff/Development/github/AYM1607/zmk-driver-azoteq-iqs5xx;/home/spiff/Development/github/FearlessSpiff/ravensplit-zmk-config"

```
