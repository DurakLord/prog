from ctypes import *
file = "/home/farid/programming/python/C/first/libextern.so"
path = "/home/farid/programming/python/C/first/libex.so"
functions = CDLL(file)

ex = CDLL(path)

name = ex.p()

a = ex.s()

a[0] = 90
print(a[0])

ex.f(a)

functions.add()
