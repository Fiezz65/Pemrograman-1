jari_jari = float(input(""))
tinggi = float(input(""))

volume = 3.14 * jari_jari * jari_jari * tinggi
luas_permukaan = 2 * 3.14 * jari_jari * (jari_jari + tinggi)
keliling = 2 * 3.14 * jari_jari

print("\nVolume = {:.2f}".format(volume))
print("Luas permukaan = {:.2f}".format(luas_permukaan))
print("Keliling alas = {:.2f}".format(keliling))