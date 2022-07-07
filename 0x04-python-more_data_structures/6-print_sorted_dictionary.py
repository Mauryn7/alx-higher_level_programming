#!/usr/bin/python3
def print_sorted_dictionary(a_dictionary):
    lista = list(a_dictionary.keys())
    lista.sort()
    for i in lista:
        print("{}: {}".format(i, a_dictionary.get(i)))
