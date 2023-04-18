import numpy as np
import scipy.stats as st
import matplotlib.pyplot as plt

# p = 1/2
# x = np.arange(0, 10)
# y = st.binom.pmf(x, 8, p)
# plt.bar(x, y)
# plt.show()

# p = 1/100
# x = np.arange(0, 10)
# y = st.binom.pmf(x, 400, p)
# plt.bar(x, y)
# plt.show()

pn = 4
x = np.arange(0, 10)
y = st.poisson.pmf(x, pn)
plt.bar(x, y)
plt.show()