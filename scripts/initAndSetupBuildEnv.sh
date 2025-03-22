#!/usr/bin/env bash

cd ~/Development/github/zmkfirmware/zmk
python3 -m venv .venv
source .venv/bin/activate
pip install west
west init -l app # only one time I guess
west update
west zephyr-export
pip install -r zephyr/scripts/requirements-base.txt
cd ~/Development/github/zmkfirmware/zmk/app

# build left
echo 'west build -p -d build/left -b nice_nano_v2 -- -DSHIELD=ravensplit_left -DZMK_EXTRA_MODULES="/home/spiff/Development/github/petejohanson/cirque-input-module;/home/spiff/Development/github/FearlessSpiff/ravensplit-zmk-config"'
