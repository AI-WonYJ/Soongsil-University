scores = []
for i in range(5):
    val = int(input("%d번 성적입력 -> " %(i+1)))
    scores.append(val)

print("\n입력된 전체점수")
print(scores, "\n")

# 합계, 평균 구하기
sumR = sum(scores)
aveR = sumR / len(scores)

# 분산, 표준편차
r = 0
for i in rnage(5):
    r += (scores[i] - aveR) ** 2
varR = r / len(scores)
stdR = varR**(1/2)

print("합계: %10d" %sumR)
print("평균: %10.2f" %aveR)
print("분산: %10.2f" %varR)
print("편차: %10.2f" %stdR)