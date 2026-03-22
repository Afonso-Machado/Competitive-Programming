#!/usr/bin/env bash

set -euo pipefail

./a.out < ./Data/in.txt | diff -y --suppress-common-lines ./Data/out.txt -
