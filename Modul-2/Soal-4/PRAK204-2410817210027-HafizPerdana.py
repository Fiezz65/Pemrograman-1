inputs = []
while True:
    line = input()
    if not line:
        break
    inputs.extend(line.split())

inputs = list(map(float, inputs))

radius, tinggi = inputs

volume = 3.14 * radius * radius * tinggi
luas_permukaan = 2 * 3.14 * radius * (radius + tinggi)
keliling = 2 * 3.14 * radius

print(f"Volume = {volume:.2f}")
print(f"Luas permukaan = {luas_permukaan:.2f}")
print(f"Keliling alas = {keliling:.2f}")