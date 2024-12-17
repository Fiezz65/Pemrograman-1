jumlah_ruangan = int(input())

zetsu_putih = list(map(int, input().split()))

for i in range(jumlah_ruangan):
    zetsu_putih[i] *= (i + 1)

print()
for i in range(jumlah_ruangan):
    print(zetsu_putih[i], end=' ')
print()