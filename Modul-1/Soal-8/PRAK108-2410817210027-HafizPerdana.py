import math

putaran = 5
jarak_tempuh = 14
phi = math.pi

keliling_satu_putaran = jarak_tempuh / putaran

jari_jari = keliling_satu_putaran / (2 * phi)

print("Diketahui :")
print("Pak Dengklek mengelilingi taman =", putaran, "Putaran")
print("Jarak tempuh Pak Dengklek =", jarak_tempuh, "Kilometer")
print("\nJawaban :")
print(f"Jari-jari taman yang dikelilingi Pak Dengklek adalah {jari_jari:.2f}", "Kilometer")