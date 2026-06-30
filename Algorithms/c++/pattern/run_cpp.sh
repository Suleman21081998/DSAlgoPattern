#!/usr/bin/env bash
set -euo pipefail

script_dir="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"

if [[ $# -gt 0 ]]; then
  files=($@)
else
  mapfile -t files < <(find "$script_dir" -type f -name "*.cpp" | sort)
fi

for file in "${files[@]}"; do
  if [[ ! -f "$file" ]]; then
    echo "File not found: $file"
    exit 1
  fi

  abs_file="$(cd "$(dirname "$file")" && pwd)/$(basename "$file")"
  dir="$(dirname "$abs_file")"
  base="$(basename "$abs_file" .cpp)"
  output="$dir/$base"

  echo "Compiling $abs_file"
  g++ -std=c++17 "$abs_file" -O2 -o "$output"

  echo "Running $output"
  "$output"
  echo
 done
