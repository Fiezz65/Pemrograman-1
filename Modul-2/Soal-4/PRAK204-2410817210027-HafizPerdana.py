inputs = []
while True:
    line = input()
    if not line:
        break
    inputs.extend(line.split())

inputs = list(map(float, inputs))

jarijari, tinggi = inputs

volume = 22 * jarijari * jarijari * tinggi / 7
luas = 2 * 22 * jarijari * (jarijari + tinggi) / 7
keliling = 2 * 22 * jarijari / 7

print(f"Volume = {volume:.2f}")
print(f"Luas = {luas:.2f}")
print(f"Keliling = {keliling:.2f}")