#!/bin/sh
touch DB.txt
read name phone
echo "$name $phone" | tee -a ./DB.txt > '/dev/null'
exit 0