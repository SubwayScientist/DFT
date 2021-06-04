import numpy as np

def PrettyPrintComplexMatrix(matrix,prec=3,linewidth1=150,suppressOn=True):
  np.set_printoptions(precision=prec,linewidth=linewidth1,suppress=suppressOn)   
  print('RE=\n', np.real(matrix))
  print('Im=\n', np.imag(matrix))

def pretty_print(A):
  shape = A.shape
  tol = 1e-8
  for nn in range(shape[0]):
    for mm in range(shape[1]):
      if(np.abs(A[nn,mm])>tol):
        print("% 5.2f" % A[nn,mm] , end =" ")
      else:
        print("  .  ", end =" ")
    print()

N=200

W = np.zeros([N,N],dtype=complex)

#test = range(N)
#print(test)

omega = np.exp(-1.j * 2 * np.pi/N)

for n in range(N):
  for m in range(N):
    W[n,m] = omega**(n*m)/(np.sqrt(N))

np.set_printoptions(formatter={'float': '{: 0.3f}'.format})
A = W.dot(np.conj(W.T))  # W*W^dag   <-- remplace this line

PrettyPrintComplexMatrix(A)
