#!/bin/bash
wget -P /tmp/ https://raw.github.com/ett99it/alx-low_level_programming/master/0x18-dynamic_libraries/nrandom.so
export LD_PRELOAD=/tmp/nrandom.so
