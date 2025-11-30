#!/bin/bash
mkdir -p build
gcc src/main.c -o build/app
echo "Build complete: build/app"
