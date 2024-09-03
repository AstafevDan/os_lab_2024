#!/bin/bash

sum=0
count=0

while read -r number; do
  sum=$((sum + number))
  count=$((count + 1))
done < numbers.txt

average=$(echo "scale=2; $sum / $count" | bc)

echo "Number of args: $count"
echo "Average: $average"