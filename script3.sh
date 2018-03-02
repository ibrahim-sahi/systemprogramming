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
unset UNIX[3]
unset UNIX[4]

echo ${UNIX[*]}


