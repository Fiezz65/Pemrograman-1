angka1, angka2 = map(int,input("").split())

i = angka1
j = angka2

if i < j:
    while i<=angka2 and j>=angka1:
        print(f"{i} {j}", end=" ")

        if i < angka2 or j > angka1:
            print("-", end=" ")
        i +=1
        j -=1
    
elif i > j:
    while i>=angka2 and j<=angka1:
        print(f"{i} {j}", end=" ")

        if i > angka2 or j < angka1:
            print("-", end=" ")
        i -=1
        j +=1