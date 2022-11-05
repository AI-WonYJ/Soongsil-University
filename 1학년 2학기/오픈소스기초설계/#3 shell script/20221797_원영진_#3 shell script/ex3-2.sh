#!/bin/sh
read A B C
if [ "$B" = "+" ]
then
	sum=`expr $A + $C`
elif [ "$B" = "-" ]
then
	sum=`expr $A - $C`
fi
echo $sum
exit 0