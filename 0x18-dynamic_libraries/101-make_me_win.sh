#!/bin/bash
gcc *.o -fPIC -shared -o libgiga.so
LD_PRELOAD=$PWD/libgiga.so
