#!/bin/bash
if [ $# = 2 ]
then
	#find the owner of file 

	arr=(`ls -l $1`)	
	
	echo "Owner " 
	echo ${arr[2]}

	echo "Group " 
	echo ${arr[3]}
	
	echo "Permissions" 
	echo ${array}

	echo "Filename" 
	echo $1

	if [ ${arr[2]} = $2 ]
	then
		echo "Cheating = 0"
	else
		echo "Cheating = 1"
	fi
else
	echo "Wrong number of arguments"
fi
