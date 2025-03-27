#!/bin/bash

cd $(dirname $0)
cmake -DCMAKE_BUILD_TYPE=Debug \
        -DCMAKE_INSTALL_PREFIX=./install \
        -S . -B build

cmake --build build -j 3
cmake --install build