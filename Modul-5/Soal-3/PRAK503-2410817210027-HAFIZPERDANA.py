def maksimal(a, b):
    return a if a > b else b

def minimal(a, b):
    return a if a < b else b

maks = -100000
minim = 100000

bilangan = int(input())

nilai_list = list(map(int, input().split()))

for nilai in nilai_list:
    maks = maksimal(maks, nilai)
    minim = minimal(minim, nilai)

print(maks, minim)