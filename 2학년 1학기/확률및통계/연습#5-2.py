import numpy as np
import scipy.stats as st
import seaborn as sns
import matplotlib.pyplot as plt

# m, sig = 0, 1/4
# x = np.linspace(-1, 1, 1000)
# xp = st.norm.pdf(x, m, sig)
# plt.plot(x, xp)
# plt.show()

m, sig = 0, 1/4
x = np.linspace(-1, 1, 10000)
xp = st.norm.cdf(x, m, sig)
plt.plot(x, xp)
plt.show()