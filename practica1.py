import sys

c="c"
TAMANO=10
x=1
ARREGLO=[TAMANO]
y=4.45

print("   ")
print(f"El tamano en bytes de una variable char es: {sys.getsizeof(c)}")
print(f"El tamano en bits de una variable char es: {sys.getsizeof(c)*8}")
print(f"El tamano en nibble de una variable char es: {sys.getsizeof(c)*2}")
print("   ")

print(f"El tamano en bytes de una variable int es: {sys.getsizeof(x)}")
print(f"El tamano en bits de una variable int es: {sys.getsizeof(x)*8}")
print(f"El tamano en nibble de una variable int es: {sys.getsizeof(x)*2}")
print("   ")

print(f"El tamano en bytes de un arreglo es: {sys.getsizeof(ARREGLO)}")
print(f"El tamano en bits de un arreglo es: {sys.getsizeof(ARREGLO)*8}")
print(f"El tamano en nibble de un arreglo es: {sys.getsizeof(ARREGLO)*2}")
print("   ")

print(f"El tamano en bytes de una variable double es: {sys.getsizeof(y)}")
print(f"El tamano en bits de una variable double es: {sys.getsizeof(y)*8}")
print(f"El tamano en nibble de una variable double es: {sys.getsizeof(y)*2}")
print("   ")