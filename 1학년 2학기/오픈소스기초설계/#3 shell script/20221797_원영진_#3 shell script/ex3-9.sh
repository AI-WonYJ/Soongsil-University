#!/bin/sh
read DB_find
eval grep -r '$DB_find' ./DB.txt
exit 0