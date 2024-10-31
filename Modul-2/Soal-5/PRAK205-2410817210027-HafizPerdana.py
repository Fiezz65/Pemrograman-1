import math

sisi_a = float(input(""))
sisi_b = float(input(""))

alas = math.sqrt(sisi_b ** 2 - sisi_a ** 2)
tinggi = sisi_a
keliling = sisi_a + sisi_b + alas
luas = 0.5 * alas * sisi_a

print(f"\nAlas = {alas:.0f} cm")
print(f"Tinggi = {tinggi:.0f} cm")
print(f"Keliling = {keliling:.0f} cm")
print(f"Luas = {luas:.0f} cm^2")