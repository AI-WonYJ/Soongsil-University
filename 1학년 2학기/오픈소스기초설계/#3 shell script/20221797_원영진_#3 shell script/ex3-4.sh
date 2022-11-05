#!/bin/sh
echo "리눅스가 재미있나요? (yes / no)"
read val
case $val in
  yes|Yes|YES|y|Y|yesyes|yesyesyes)
    echo "yes";;
  no|No|NO|n|N|nono|nonono)
    echo "no";;
  *)
    echo "yes or no로 입력해 주세요.";;
esac
exit 0