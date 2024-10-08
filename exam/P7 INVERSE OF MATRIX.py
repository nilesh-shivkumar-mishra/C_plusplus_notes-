#Invers of matrix
import numpy as np
M=np.array([[1,2,1],[2,1,0],[3,0,2]])
print("The given matrix M is :",M)
det=np.linalg.det(M)
print("The Determinnt of the Martix= ",det)
if det!=0:
    InvM=np.linalg.inv(M)
    print("The invers of the mtrix is  :")
    print(InvM)
else:
    print("The invers of the matrix doesn't exits")
    
#same code withh different arry

import numpy as np
M=np.array([[1,2,3],[0,-1,0],[2,4,6]])
print("The given matrix M is :",M)
det=np.linalg.det(M)
print("The Determinnt of the Martix= ",det)
if det!=0:
    InvM=np.linalg.inv(M)
    print("The invers of the mtrix is  :")
    print(InvM)
else:
    print("The invers of the matrix doesn't exits")
