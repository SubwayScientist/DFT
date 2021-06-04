import numpy as np

N=4

W = np.zeros([N,N])

for n in range(N):
    for m in range(N):
        omega = np.exp(-1.j * 2 * np.pi *n*m/N)
print(W)
