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

echo "Now replacing Ubuntu with SCO Unix"
echo ${UNIX[@]/2/SCOUnix}

echo "Now adding elements AIX and HP-UX in the array"
echo ${UNIX[@]AIX HP AUX}

echo "After removing 3rd element from array UNIX"
unset ${UNIX[2]}

echo "After removing array LINUX"
unset LINUX

echo "After removing array UNIX"
unset UNIX
