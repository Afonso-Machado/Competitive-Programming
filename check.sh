#!/usr/bin/env bash

set -euo pipefail

./a.out < in.txt | diff -y --suppress-common-lines out.txt -
