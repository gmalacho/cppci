#!/bin/bash

# Create build directory if it doesn't exist
if [ ! -d "build" ]; then
  mkdir build
fi

# Navigate into the build directory
cd build

# Run cmake and make
cmake ..
make
