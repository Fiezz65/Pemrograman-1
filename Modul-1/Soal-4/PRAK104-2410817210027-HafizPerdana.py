harga_sepatu_A = 400000
harga_sepatu_B = 350000
diskon_A = 0.13
diskon_B = 0.21

harga_akhir_A = harga_sepatu_A - (harga_sepatu_A * diskon_A)
harga_akhir_B = harga_sepatu_B - (harga_sepatu_B * diskon_B)

print("Harga sepatu A adalah", harga_sepatu_A)
print("Harga sepatu B adalah", harga_sepatu_B)
print("Sepatu A mendapat diskon 13% sehingga harganya menjadi", int(harga_akhir_A))
print("Sepatu B mendapat diskon 21% sehingga harganya menjadi", int(harga_akhir_B))