'''Testando o algoritmo com 2 vetores'''
from BinarySearch import binarysearch

v = [2, 3, 4, 7, 10, 22, 40]
x = 10

#4
print(str(x) + " is in position: " + 
    str(binarysearch(v, 0, len(v)-1, x)))

w = [3, 7, 22, 40]
y = 7

#1
print(str(y) + " is in position: " + 
    str(binarysearch(w, 0, len(w)-1, y)))
