#!/usr/bin/python3
def uniq_add(my_list=[]):
    uni = []
    suma = 0
    for i in range(len(my_list)):
        x = my_list[i]
        [uni.append(x) for x in my_list if x not in uni]
    for j in range(len(uni)):
        suma += uni[j]
    return suma
