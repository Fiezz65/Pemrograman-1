inputs = []
while True:
    line = input()
    if not line:
        break
    inputs.extend(line.split())

inputs = list(map(float, inputs))

a, b, i, j, x, y = inputs

hasil = (((a - b) * i) / j) - (x + y)
print(f"{hasil:.3f}")