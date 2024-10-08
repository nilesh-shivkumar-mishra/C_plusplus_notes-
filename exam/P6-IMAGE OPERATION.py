import numpy as np
from PIL import Image
from numpy import asarray
#code1
'''img=asarray(Image.open('C:/Users/ICTC/Desktop/images.jpg'))
print(img.shape)
data=Image.fromarray(img)
data.show()
#code2
img=asarray(Image.open('C:/Users/ICTC/Desktop/images.jpg'))
img0=asarray(Image.open('C:/Users/ICTC/Desktop/images1.jpg'))
print(img.shape)
print(img0.shape)
nimg=(img+img0).astype(np.uint8)
data=Image.fromarray(nimg)
print(type(data))
a=Image.open(('C:/Users/ICTC/Desktop/images.jpg'))
b=Image.open(('C:/Users/ICTC/Desktop/images1.jpg'))
a.show()
b.show()
data.show()'''
#code3,4,5(+,-,*)
#code2
img=asarray(Image.open('C:/Users/ICTC/Desktop/images.jpg'))
img0=asarray(Image.open('C:/Users/ICTC/Desktop/images1.jpg'))
print(img.shape)
print(img0.shape)
nimg=(0.6*img+0.4*img0).astype(np.uint8)
data=Image.fromarray(nimg)
print(type(data))
a=Image.open(('C:/Users/ICTC/Desktop/images.jpg'))
b=Image.open(('C:/Users/ICTC/Desktop/images1.jpg'))
a.show()
b.show()
data.show()


