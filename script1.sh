#!/bin/sh

echo "Enter two numbers:"
read num1 num2

if [ $num1 -eq 0 ]
	then
	echo "First Number is equal to zero"
fi

echo "Results of artithmetics performed on the numbers are as follows:"

echo "Addition"
echo $num1 "+" $num2 "equals: " `expr $num1 + $num2`

echo "Subtraction"
echo $num1 "-" $num2 "equals: " `expr $num1 - $num2`

echo "Multiplication"
echo $num1 "*" $num2 "equals: " `expr $num1 \* $num2`

echo "Division"
if [ $num2 -eq 0 ]
	then
	echo "Second number must not be zero for valid division"

else
 	echo $num1 "/" $num2 "equals: " `expr $num1 / $num2`
fi
echo "Modulus"
echo $num1 "%" $num2 "equals: " `expr $num1 % $num2`
