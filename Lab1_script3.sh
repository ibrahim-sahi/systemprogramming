#!/bin/sh

echo "Task 3 Array Manipulation"

echo "Array contains the following elements:"
UNIX=(Debian Redhat Ubuntu Suse Fedora)
echo ${UNIX[*]}

echo "Total number of elements in array equal: "
echo ${#UNIX[*]}

echo "Length of element on index 2 is: "
echo ${#UNIX[2]}

echo "Extracting 2 elements from index 3 onwards"
echo ${unix[@]:2:4}

echo "Now replacing Ubuntu with SCO Unix"
echo ${unix[@]/Ubuntu/'SCO Unix'}

echo "Now adding elements AIX and HP-UX in the array"
unix=(${unix[@]} 'AIX' 'HP-UX')
	echo ${unix[*]}

echo "After removing 3rd element from array UNIX"
unset ${UNIX[2]}
echo ${unix[@]}

echo "New array LINUX"
	linux=(${unix[@]})
	echo ${linux[*]}

	echo "New array BASH"
	bash=(${unix[@]} ${linux[@]} )
	echo ${bash[*]}

echo "Removing array LINUX"
unset LINUX[*]

echo "Removing array UNIX"
unset UNIX[*]
