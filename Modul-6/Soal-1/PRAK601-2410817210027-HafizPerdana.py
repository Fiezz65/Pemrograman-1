baris, kolom = map(int, input().split())

elements = list(map(int, input().split()))

matrix = []
index = 0
for i in range(baris):
    row = elements[index:index + kolom]
    matrix.append(row)
    index += kolom

print()

for i in range(baris):
    for j in range(kolom):
        print(matrix[i][j], end=' ')
    print()