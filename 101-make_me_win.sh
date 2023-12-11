#!/bin/bash

gcc -shared -o /tmp/win.so /path/to/your/c-code.c
export LD_PRELOAD=/tmp/win.so
