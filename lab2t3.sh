#!/bin/bash

showAllOwners()
{
	if [ $# -eq 0 ]
	then 
	echo "Error: No argument..!"
	elif [ $# -gt 1 ]
	then 
	echo "Only One User Found..!"
	else
	userName=$1
	for i in `ls`
	do
	set `ls -li $i`
	shift
	if [ -f $i ]
	then
	if [ $userName = $3 ]
	then
	echo "FileName:  " $9 "  Owner Name :"  $3
	fi
	fi
	done
	fi
}

showAllOwners $@
