#!/bin/sh
echo "Enter The Number: "
read n
i=0
sum=0
until [ $n -lt $i ]
do
	sum=$(($sum + $i))
	i=$(($i + 1))
done
echo "Sum Of $n Natural Number Is : $sum"
