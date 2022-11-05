#!/bin/sh
myFunction() {
echo "함수 안으로 들어 왔음"
eval "ls"
eval "ls -l ex3-5.sh"
  return
}
echo "프로그램을 시작합니다."
myFunction
echo "프로그램을 종료합니다."
exit 0