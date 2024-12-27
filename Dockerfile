# Use the latest Alpine image as the base
FROM alpine:latest

# Install dependencies and tools (gcc, g++, make, cmake, git)
RUN apk update && apk add --no-cache \
    gcc \
    g++ \
    make \
    cmake \
    git \
    bash \
    libstdc++ \
    musl-dev \
    && rm -rf /var/cache/apk/*

# Install Google Test
RUN mkdir -p /usr/src/gtest \
    && cd /usr/src/gtest \
    && git clone --branch release-1.10.0 https://github.com/google/googletest.git \
    && cd googletest \
    # Add flag to disable treating warnings as errors
    && cmake -DCMAKE_CXX_FLAGS="-Wno-error -Wno-maybe-uninitialized" . \
    && make \
    && make install \
    && cd / \
    && rm -rf /usr/src/gtest

# Set the working directory
WORKDIR /workspace

# Default command to run when the container starts
CMD ["/bin/bash"]
