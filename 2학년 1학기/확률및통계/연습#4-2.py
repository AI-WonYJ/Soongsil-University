import numpy as np
import scipy.stats as st
import seaborn as sns
import matplotlib.pyplot as plt

N = 20000
x_sums = np.zeros(N)
for k in range(N):
  x = st.binom.rvs(10, 0.5, size=N)
  x_sums[k] = np.sum(x)
x_sum_mean = np.mean(x_sums)
x_sum_std = np.std(x_sums)
print(x_sum_mean, x_sum_std**2)
z = (x_sums - x_sum_mean) / x_sum_std
sns.histplot(z, bins=30, kde=True)
plt.show()