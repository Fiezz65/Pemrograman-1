import math

inputs = []
while True:
    line = input()
    if not line:
        break
    inputs.extend(line.split())

inputs = list(map(float, inputs))

sisi_a, sisi_b = inputs

alas = math.sqrt(sisi_b * sisi_b - sisi_a * sisi_a)
tinggi = sisi_a
keliling = sisi_a + sisi_b + alas
luas = 0.5 * alas * sisi_a

print(f"Alas = {alas:.0f} cm")
print(f"Tinggi = {tinggi:.0f} cm")
print(f"Keliling = {keliling:.0f} cm")
print(f"Luas = {luas:.0f} cm²")