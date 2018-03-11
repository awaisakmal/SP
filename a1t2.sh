#!/bin/bash
`touch odd.txt`
`touch even.txt`
count=1
for i in `more -1 file`
do 
x=$((count%2))
if [ $x -eq 0 ]
then
	echo $i  1>>even.txt
	count=`expr $count + 1`
else
	echo $i  1>>odd.txt
	count=`expr $count + 1`
fi
done
