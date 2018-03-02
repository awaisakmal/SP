#!/bin/bash
tmp=$2
set ` ls -li $1 `

echo "Owner : " S4
echo "Group : " S5
echo "Permission : " S2
shift
echo "File name : " S9
if [ $4 = $tmp ]
then
 echo "Cheating : 0"
else
 echo "Cheating : 1"
fi