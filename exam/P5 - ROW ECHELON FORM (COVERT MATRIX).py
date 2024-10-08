import sympy as sy
M=sy.Matrix([[1,2,3],[2,3,4],[4,8,9]])#input 1 
N=sy.Matrix([[1,0,1,3],[2,3,4,7],[-1,-3,-3,-4]])#input 2
print("the 3x3 matrix :")
print("The row Echelon form of matrix M")
print(M.rref())
print("The rank of the matrix M =" ,M.rank())
print("the 3x4 matrix :")
print("The row Echelon form of matrix M")
print(N.rref())
print("The rank of the matrix N = " ,N.rank())
