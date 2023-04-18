import numpy as np
from scipy import stats
import statistics as st
import pandas as pd

print("<---------- 산술평균 ---------->\n")
x = np.random.rand(5)*100
print(x)
print((x[0] + x[1] + x[2] + x[3] + x[4])/5)
print(np.mean(x))

print("\n\n\n<---------- 가중평균 & 절사평균 ---------->\n")
x = np.random.rand(5)*100
print(np.sort(x))
print(np.average(x, weights=[0.1, 0.2, 0.4, 0.2, 0.1]))
print(stats.trim_mean(x, 0.2))

print("\n\n\n<---------- 기하평균 ---------->\n")
x = np.random.rand(5)*100
print(x)
print((x[0] + x[1] + x[2] + x[3] + x[4])**(1/5))
print(st.geometric_mean(x))

print("\n\n\n<---------- 조화평균 ---------->\n")
x = np.random.rand(5)*100
print(x)
print(5 / ( 1/x[0] + 1/x[1] + 1/x[2] + 1/x[3] + 1/x[4]))
print(st.harmonic_mean(x))

print("\n\n\n<---------- 중앙값, 최빈값 ---------->\n")
x = [40, 40, 50, 60, 120]
print(x)
print(np.mean(x))
print(np.average(x))

print(np.median(x))
print(np.unique(x, return_counts=1))

print("\n\n\n<---------- 산포값 ---------->\n")
print("\n<---------- 자료의 범위 ---------->\n")
x = np.random.rand(10)
print(np.sort(x))
print(np.max(x))
print(np.median(x))
print(np.min(x))
print(np.max(x)-np.min(x))

print("\n<---------- 사분위 범위, 사분위 편차 ---------->\n")
x = np.random.rand(10)
print(np.percentile(x, [25, 50, 75]))

data = pd.DataFrame(x)
q1 = data.quantile(0.25)
q2 = data.quantile(0.50)
q3 = data.quantile(0.75)
print(q1)
print(q2)
print(q3)
print(data.describe())
print((q3-q1)/2)

print("\n<---------- 분산, 표준편차 ---------->\n")
x = np.random.rand(5)
print(x)
print(sum((x-np.mean(x))**2)/(len(x)-1))
print(np.var(x, ddof = 0), np.var(x))
print(np.sqrt(np.var(x)), np.std(x))