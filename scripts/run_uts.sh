#!/bin/bash

# Set the directory containing the executables
BIN_DIR="./build/bin"

# Check if the directory exists
if [ ! -d "$BIN_DIR" ]; then
  echo "Directory $BIN_DIR does not exist."
  exit 1
fi

# Run all executables in the directory
for exe in "$BIN_DIR"/*; do
  if [ -x "$exe" ]; then
    echo "Running $exe..."
    "$exe"
  else
    echo "Skipping $exe (not executable)"
  fi
done
