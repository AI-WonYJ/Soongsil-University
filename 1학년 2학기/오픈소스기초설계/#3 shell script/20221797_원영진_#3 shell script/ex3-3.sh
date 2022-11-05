#!/bin/sh
read weight height
weight=`expr $weight \* 10000`
height=`expr $height \* $height`
BMI=`expr $weight / $height`
min=18.5
if [ $BMI -ge ${min%.*} ] && [ $BMI -lt 23 ]
then
	echo "정상체중입니다."
elif [ $BMI -lt ${min%.*} ]
then
	echo "저체중입니다."
else
	echo "과체중입니다."
fi
exit 0