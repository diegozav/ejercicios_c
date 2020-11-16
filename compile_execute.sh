#!/bin/bash

set -x


gcc --version

gcc program.c -o program
./program
