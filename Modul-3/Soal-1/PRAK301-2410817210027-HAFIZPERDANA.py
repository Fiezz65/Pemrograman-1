a, b, c = map(int, input("").split())

if c > b and b > a:
    print(f"{a} {b} {c}")
elif b > c and c > a:
    print(f"{a} {c} {b}")
elif c > a and a > b:
    print(f"{b} {a} {c}")
elif a > c and c > b:
    print(f"{b} {c} {a}")
elif b > a and a > c:
    print(f"{c} {a} {b}")
else:
    print(f"{c} {b} {a}")