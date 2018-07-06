#!/bin/bash
if [ $# = 5 ]
then
	arr=(`ls -l $2`)

	arr2=(`ls -l $4`)	
	
	echo "Owner " 
	echo ${arr[2]}

	echo "Group " 
	echo ${arr[3]}

	echo "Have Permission" 
	echo ${arr}

	echo "Filename" 
	echo $2

	echo "Owner " 
	echo ${arr2[2]}

	echo "Group " 
	echo ${arr2[3]}

	echo "Permission" 
	echo ${arr2}

	echo "Filename" 
	echo $4

	echo "The difference between $2 and $4"

	`diff -c $2 $4`
	
	 a=$?	

	if [ $a = 1 ]

	then
		echo `diff -y $2 $4`
		echo "Cheating = 0"
	else
		echo "There is no difference"
		echo "Cheating = 1"
	fi

else
	echo "Wrong number of arguments"
fi
