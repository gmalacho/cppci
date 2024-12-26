#!/bin/bash

echo "Updateing gcc"

sudo add-apt-repository ppa:ubuntu-toolchain-r/test # Ignore if not ubuntu

sudo apt-get update

sudo apt-get install gcc-4.9

sudo apt-get upgrade libstdc++6

echo "Update gcc done"