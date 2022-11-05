#!/bin/sh
read val
read file_1 file_2 file_3 file_4 file_5 tar_file
if [ ! -d $val ];
then
  mkdir $val
fi
touch $val/$file_1
touch $val/$file_2
touch $val/$file_3
touch $val/$file_4
touch $val/$file_5

str="tar -cvf $val/$tar_file $val/$file_1 $val/$file_2 $val/$file_3 $val/$file_4 $val/$file_5"
eval $str
exit 0