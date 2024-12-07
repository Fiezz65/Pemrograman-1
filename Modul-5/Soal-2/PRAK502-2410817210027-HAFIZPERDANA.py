import math

def hitung(nilai1, nilai2):
    return math.sqrt((nilai2 - nilai1) ** 2)

def mutlak(angka):
    return abs(angka)

a, c, b, d = map(int, input().split())

Hasil = hitung(a, b) + hitung(c, d)
print(mutlak(int(Hasil)))