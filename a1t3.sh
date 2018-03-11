#!/bin/bash
var=0
Is_User_Exist()
{
for i in `more -1 /etc/passwd`
do
var1=$i
v=${var1%%\:*}
	if [ $v = $1 ]
	then
		echo "User Exist"
		exit
	fi
done	
echo "User no Exist"
}
Is_Lower()
{
	echo $1 | tr [:upper:] [:lower:]
}

Is_root()
{
	if [ $EUID -eq 0 ]
	then
		echo "Execute By User"
	else
		echo "Not Execute By User"
	fi
}
#Is_User_Exist $1
#Is_Lower "$1"

