
#projection of b orthogonal to given vector u
import numpy as np
def proj(of_vec,on_vec):
    v1=np.array(of_vec)
    v2=np.array(on_vec)
    scal=np.dot(v2,v1)/np.dot(v2,v2)
    vec=scal*v2
    return np.round(vec,decimals=10)
u=np.array([4.0,4.0])
v=np.array([8.0,2.0])
print("The Projection vector of U on V is ")
print(proj(u,v))

#The projection vector of U orthogonal  to V 
def unit_vec(u):
    bottom=np.linalg.norm(u)
    return u/bottom
w=u-proj(u,v)
b2=unit_vec(w)
print("The projection vector of U orthogonal  to V : ",b2)
b1=unit_vec(v)
print("The dot product of orthogonal Part of Projection of U and V")
print(round(np.dot(b1,b2),10))


vector=np.array([[2,3],[4,5],[6,7]])
u=np.array([1,0])
projects=np.array([proj(v,u) for v in vector])
print("Projections : ")
for i,proj in enumerate(projects):
    print(f"Projection of vector {vector[i]} onto {u}:{proj}")
