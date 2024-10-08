#write user defined to matrix
import numpy as np
print("frist matrix:")
r=int(input("Enter row : "))
c=int(input("Enter col : "))
n=r*c
list=[]
for i in range (n):
    a=int(input("Input the Element : "))
    list.append(a)
s=np.array(list).reshape(r,c)
print(s)

print("Second matrix:")
r=int(input("Enter row : "))
c=int(input("Enter col : "))
n=r*c
list=[]
for i in range (n):
    a=int(input("Input the Element : "))
    list.append(a)
l=np.array(list).reshape(r,c)
print(l)

#Addition of two matrix

import numpy as np
print("frist matrix:")
r=int(input("Enter row : "))
c=int(input("Enter col : "))
n=r*c
list=[]
for i in range (n):
    a=int(input("Input the Element : "))
    list.append(a)
s=np.array(list).reshape(r,c)
print(s)

print("Second matrix:")
r=int(input("Enter row : "))
c=int(input("Enter col : "))
n=r*c
list=[]
for i in range (n):
    a=int(input("Input the Element : "))
    list.append(a)
l=np.array(list).reshape(r,c)
print(l)

if(s.shape==l.shape):
    print("The addition of the two matrix is : ",s+l)
else:
    print("Cannot do the operation")

# Multiplication of two matrix

import numpy as np
print("frist matrix:")
r=int(input("Enter row : "))
c=int(input("Enter col : "))
n=r*c
list=[]
for i in range (n):
    a=int(input("Input the Element : "))
    list.append(a)
s=np.array(list).reshape(r,c)
print(s)

print("Second matrix:")
r=int(input("Enter row : "))
c=int(input("Enter col : "))
n=r*c
list=[]
for i in range (n):
    a=int(input("Input the Element : "))
    list.append(a)
l=np.array(list).reshape(r,c)
print(l)


if(np.shape(s)[1]==np.shape(l)[0]):
    print("The Multi of the two matrix is : ",np.dot(s,l))
else:
    print("Cannot do the operation")


