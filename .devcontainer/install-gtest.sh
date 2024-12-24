#!/bin/bash

echo "Installing Google Test..."

cd /tmp

git clone https://github.com/google/googletest.git
cd googletest
mkdir build
cd build
cmake -DCMAKE_CXX_STANDARD=17 ..
make -j$(nproc)
sudo make install

rm -rf /tmp/googletest

echo "Google Test installation complete!"