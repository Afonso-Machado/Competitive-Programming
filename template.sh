#!/bin/bash

if [ -z "$1" ]; then
    echo "Usage: $0 filename.cpp"
    exit 1
fi

cat << 'EOF' > "$1.cpp"
#include <bits/stdc++.h>
using namespace std;

int main() {

    return 0;
}
EOF