#!/usr/bin/env bash

SCRIPT_DIR=$(readlink -f "$(dirname "$0")")

docker build -f docker/Dockerfile .