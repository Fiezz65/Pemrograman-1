inputs = []
while True:
    line = input()
    if not line:
        break
    inputs.extend(line.split())

inputs = list(map(float, inputs))

jari_jari, tinggi = inputs

volume = 3.14 * jari_jari * jari_jari * tinggi
luas_permukaan = 2 * 3.14 * jari_jari * (jari_jari + tinggi)
keliling = 2 * 3.14 * jari_jari

print("Volume = {:.2f}".format(volume))
print("Luas permukaan = {:.2f}".format(luas_permukaan))
print("Keliling alas = {:.2f}".format(keliling))