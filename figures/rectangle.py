import matplotlib.pyplot as plt
import numpy as np


X = np.r_[-np.pi:2*np.pi:0.001]
Sin = [np.sin(i) for i in X]

xx = np.r_[0:np.pi:0.001]
ssin = [np.sin(i) for i in xx]

points = np.r_[0:np.pi+np.pi/3.:np.pi/3.]

fig, ax = plt.subplots(1)
ax.plot(X, Sin, lw=2, color='blue', label = '$\sin(x)$')
#ax.fill_between(xx, ssin, 0, facecolor='blue', alpha=0.3)
ax.axvline(0,ls=':',color='k')
ax.axhline(0,ls=':',color='k')
ax.plot(points,[np.sin(i) for i in points],color='r',lw=0.1)
ax.fill_between(points,[np.sin(i) for i in points], 0, facecolor='blue', alpha=0.3)
#ax.set_title('random walkers empirical $\mu$ and $\pm \sigma$ interval')
ax.set_xlabel('$x$')
ax.set_ylabel('$y$')
#ax.grid()
ax.legend(loc='upper right')
ax.set_xlim([-0.5,3.5])
ax.set_ylim([-0.2,1.2])
ax.set_xticks([0, np.pi/2., np.pi])
ax.set_xticklabels(['0',r'$\pi/2$',r'$\pi$'])
plt.tight_layout()
plt.savefig('rectangle.pdf')
