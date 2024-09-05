#!/bin/bash

set -e

gcc -Wall -I./src/include -I./src/ui -o ./build/temperature.exe ./src/*.c ./src/ui/*.c
./build/temperature.exe
