#!/bin/bash

rm -rf ./CH1_COMP
mkdir ./CH1_COMP
DIR=$(find C_CH1 | tail -n +2)
DIR=($DIR)
for i in "${DIR[@]}"; 
do
	CUT=$(echo $i | cut -d "/" -f2 | cut -d "." -f1)
	gcc -o $CUT $i
	mv $CUT ./CH1_COMP/
done;
