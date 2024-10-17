import math

alas = 5
tinggi = 12

sisi_miring = math.sqrt(alas*alas + tinggi*tinggi)
keliling = alas + tinggi + sisi_miring
luas = 0.5 * alas * tinggi

print("Diketahui:")
print("Alas =", alas, "cm")
print("Tinggi =", tinggi, "cm")

print("\nJawab:")
print(f"Sisi A = {tinggi:.0f} cm")
print(f"Sisi B = {sisi_miring:.0f} cm")
print(f"Sisi C = {alas:.0f} cm")
print(f"Keliling = {keliling:.0f} cm")
print(f"Luas = {luas:.0f} cm")