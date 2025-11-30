#!/bin/bash
gcc tests/test_main.c -o test_runner
./test_runner
echo "Tests passed!"
