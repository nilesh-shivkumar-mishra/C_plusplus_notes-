#Eigen values & Eigen vectors
import numpy as np
A=np.array([[1,2,1],[2,1,0],[3,0,2]]);
print("A\n",A)
print("EIGEN           VALUES       OF       A\n", np.linalg.eigvals(A))
(eigenvalue,eigenvector)=np.linalg.eig(A)
print("Eigenvectors of A\n",eigenvector)

