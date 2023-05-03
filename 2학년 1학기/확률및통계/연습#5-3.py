import numpy as np
import scipy.stats as st
import seaborn as sns
import matplotlib.pyplot as plt

# x = np.linspace(-4, 4, 1000)
# xp_sn = st.norm.pdf(x, 0, 1)
# plt.plot(x, xp_sn, 'b--')

# v = 30
# xp = st.t.pdf(x, v)
# plt.plot(x, xp, 'g')
# plt.show()

x = np.linspace(-4, 4, 1000)
xp_sn = st.norm.cdf(x, 0, 1)
plt.plot(x, xp_sn, "b--")

v = 1
xp = st.t.cdf(x, v)
plt.plot(x, xp, 'g')
plt.show()
