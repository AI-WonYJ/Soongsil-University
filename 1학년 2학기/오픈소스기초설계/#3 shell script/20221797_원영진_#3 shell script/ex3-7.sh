#!/bin/sh
read val
if [ ! -d $val ];
then
  mkdir $val
fi
eval cd $val
for i in $(seq 0 4)
do
	name=file$i
	touch $name.txt
	mkdir $name
	eval ln -s /destop/$val/$name.txt ./$name/$name.txt
done
exit 0