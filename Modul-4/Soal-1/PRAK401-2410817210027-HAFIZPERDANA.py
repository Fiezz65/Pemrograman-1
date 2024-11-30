kelipatan, simbol = input("").split()

for i in range(1, 51):
    if i % int(kelipatan) == 0:
        print(simbol, end=" ")
    else:
        print(i, end=" ")