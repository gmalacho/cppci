#!/bin/bash

echo "Updating gcc"

# Add the PPA repository silently
sudo add-apt-repository -y ppa:ubuntu-toolchain-r/test # Ignore if not Ubuntu

# Update package lists
sudo apt-get update -y

# Install gcc-4.9 without user interaction
sudo apt-get install -y gcc

# Upgrade libstdc++6 without user interaction
sudo apt-get upgrade -y libstdc++6

echo "Update gcc done"