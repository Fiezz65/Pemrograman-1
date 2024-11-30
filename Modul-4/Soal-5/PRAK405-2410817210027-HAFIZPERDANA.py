n, k = map(int, input().split())

totalJumlah = 0

for i in range(1, n+1):
    jumlah = 0
    for j in range(i, 0, -1):
        print(f"({j} * {k})", end="")
        jumlah += j * k
        if j > 1:
            print(" + ", end="")
    print(f" = {jumlah}")
    totalJumlah += jumlah

print(totalJumlah)