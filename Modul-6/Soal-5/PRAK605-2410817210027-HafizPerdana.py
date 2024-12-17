n = int(input(""))

A = []
B = []
C = [[0 for _ in range(n)] for _ in range(n)]

print("Matriks A:")
for i in range(n):
    row = list(map(int, input().split()))
    A.append(row)

print("Matriks B:")
for i in range(n):
    row = list(map(int, input().split()))
    B.append(row)

for i in range(n):
    for j in range(n):
        for k in range(n):
            C[i][j] += A[i][k] * B[k][j]

print("\nMatriks A x B:")
for i in range(n):
    for j in range(n):
        print(C[i][j], end=" ")
    print()