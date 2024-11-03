inputs = []
while True:
    line = input()
    if not line:
        break
    inputs.extend(line.split())

inputs = list(map(float, inputs))

jarijari, tinggi = inputs

volume = 3.14 * jarijari * jarijari * tinggi
luas = 2 * 3.14 * jarijari * (jarijari + tinggi)
keliling = 2 * 3.14 * jarijari

print(f"Volume = {volume:.2f}")
print(f"Luas = {luas:.2f}")
print(f"Keliling = {keliling:.2f}")