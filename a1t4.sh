#!/bin/bash
if [ -f $1 ]
then
	sort -u $1
else 
	echo "File does not exist"
fi
