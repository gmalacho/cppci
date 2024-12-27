# Use the base Ubuntu image
FROM mcr.microsoft.com/devcontainers/base:ubuntu

# Set environment variable to avoid interactive prompts during installation
ENV DEBIAN_FRONTEND=noninteractive

# Update package lists and install necessary tools
RUN apt-get update && apt-get install -y \
    git \
    cmake \
    make \
    gcc \
    g++ \
    wget \
    unzip \
    gdb \
    && apt-get clean

# Add PPA repository for gcc-4.9 and update package lists
RUN apt-get update -y && \
    apt-get install -y software-properties-common && \
    add-apt-repository -y ppa:ubuntu-toolchain-r/test && \
    apt-get update -y

# Install gcc-4.9 and upgrade libstdc++6
RUN apt-get install -y gcc-4.9 && \
    apt-get upgrade -y libstdc++6 && \
    apt-get clean

# Install Google Test
RUN mkdir -p /usr/src/gtest \
    && cd /usr/src/gtest \
    && git clone https://github.com/google/googletest.git \
    && cd googletest \
    && cmake . \
    && make \
    && make install \
    && cd / \
    && rm -rf /usr/src/gtest

# Set the working directory
WORKDIR /workspace

# Default command to run when the container starts
CMD ["/bin/bash"]