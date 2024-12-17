n1, n2 = map(int, input().split())

if n1 != n2:
    print("Jumlah tidak sama")
else:
    arr1 = list(map(int, input().split()))
    arr2 = list(map(int, input().split()))

    print()
    for i in range(n1):
        print(arr1[i] * arr2[i], end=' ')
    print()