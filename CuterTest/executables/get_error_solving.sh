#!/bin/bash

grepout=$(grep -n "error solving" $1)
line_number=$(echo $grepout | sed 's/:/ /g' | awk '{print $1}')

sed "1,${line_number}d" $1