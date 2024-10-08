import numpy as np
p=np.array([[0,1/3,1/3,1/3],[1/2,0,0,1/2],[0,0,0,1],[0,1/2,1/2,0]])
print(np.sum(p,axis=1))
eigen_vals,eigen_vecs=np.linalg.eig(p.T)
print(eigen_vals)
print(eigen_vecs)
print(np.absolute(eigen_vals))

order= np.absolute(eigen_vals).argsort()[::-1]
print(order);
print(eigen_vecs[:,order])
eigen_vecs=eigen_vecs[:,order]
r=eigen_vecs[:,0]
print(r)
visits=100*np.real(r/np.sum(r))
print(visits)
