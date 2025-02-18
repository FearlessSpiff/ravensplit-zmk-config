# Build notes

## Local Build

### one time

* install local pip venv (or whatever) environment as in only to step 3!: <https://zmk.dev/docs/development/local-toolchain/setup/native>
* then `paru -S zephyr-sdk-bin`

```bash
mkdir ~/Development/github/petejohanson
git clone https://github.com/petejohanson/cirque-input-module ~/Development/github/petejohanson/cirque-input-module
```

### then Build

```bash
cd ~/Development/github/zmkfirmware/zmk
python3 -m venv .venv
source .venv/bin/activate
pip install west
west update
west zephyr-export
pip install -r zephyr/scripts/requirements-base.txt
cd ~/Development/github/zmkfirmware/zmk/app

# build left
west build -p -d build/left -b nice_nano_v2 -- -DSHIELD=ravensplit_left -DZMK_EXTRA_MODULES="/home/spiff/Development/github/petejohanson/cirque-input-module;/home/spiff/Development/github/FearlessSpiff/ravensplit-zmk-config"

# build right
west build -p -d build/right -b nice_nano_v2 -- -DSHIELD=ravensplit_right -DZMK_EXTRA_MODULES="/home/spiff/Development/github/petejohanson/cirque-input-module;/home/spiff/Development/github/FearlessSpiff/ravensplit-zmk-config"

```
