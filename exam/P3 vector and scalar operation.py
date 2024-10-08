

#INPUT A VECTOR LIST
n=int(input("give no.of coordinates"))
print("Give the  Frist Vector : ")
u=[int(input("give the coordinates "))for i in range(n)]
print("u= ",u)
print("Give the second vectior :")
v=[int(input("give the coordinates"))for i in range(n)]
print("v= ",v)

#ADDITION OF VECTOR
def addvec(u, v):
    l = 0
    s = []
    for i in range(len(v)):
        l = v[i] + u[i]
        s.append(l)
    return s

n = int(input("Give number of coordinates: "))

print("Give the first vector:")
u = [int(input("Give the coordinate: ")) for i in range(n)]
print("u =", u)

print("Give the second vector:")
v = [int(input("Give the coordinate: ")) for i in range(n)]
print("v =", v)

print("Addition of two vectors is:", addvec(u, v))


#SCALAR VECTOR
def saclr(v):
    S=int(input("give the scalacr "))
    d=0
    multi=[]
    for i in range(len(v)):
         d=S*v[i]
         multi.append(d)
    return(multi)


n = int(input("Give number of coordinates: "))

print("Give the first vector:")
u = [int(input("Give the coordinate: ")) for i in range(n)]
print("u =", u)

print("Give the second vector:")
v = [int(input("Give the coordinate: ")) for i in range(n)]
print("v =", v)

print("saclar multication of the vector :",saclr(v))


#DOT PRODUCT U AND V
def dotpro(v,u):
    sum=0
    for i in range(len(v)):
            sum=sum+v[i]*u[i]
    return(sum)

n = int(input("Give number of coordinates: "))

print("Give the first vector:")
u = [int(input("Give the coordinate: ")) for i in range(n)]
print("u =", u)

print("Give the second vector:")
v = [int(input("Give the coordinate: ")) for i in range(n)]
print("v =", v)

print ("The dot product is :",dotpro(v,u));



    




    
