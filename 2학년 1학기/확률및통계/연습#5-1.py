import numpy as np
import scipy.stats as st
import seaborn as sns
import matplotlib.pyplot as plt

# p, n = 1/6, 10
# k = np.arange(n+1)
# kp = st.binom.pmf(k, n, p)
# plt.bar(k, kp, width = 0.1)
# plt.plot(k, kp, 'bo')
# plt.show()

p,n = 1/6, 10
k = np.arange(n+1)
kp = st.binom.cdf(k, n, p)
plt.bar(k, kp, width = 0.1)
plt.plot(k, kp, 'bo')
plt.show()