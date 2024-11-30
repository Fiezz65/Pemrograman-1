def penjumlahan(a, b):
    return a + b

def pengurangan(a, b):
    return a - b

def perkalian(a, b):
    return a * b

def pembagian(a, b):
    return a / b

while True:
    print("Pilih program:")
    print("1. Penjumlahan")
    print("2. Pengurangan")
    print("3. Perkalian")
    print("4. Pembagian")
    print("5. Exit")
    
    pilihan = int(input("Masukkan pilihan: "))

    if pilihan == 5:
        print("Terimakasih, telah menggunakan kalkulator Hafiz Perdana")
        break

    if pilihan < 1 or pilihan > 5:
        print("Input anda salah, silakan coba lagi")
        continue
    
    angka1 = float(input("Masukkan nilai pertama: "))
    angka2 = float(input("Masukkan nilai kedua: "))
    
    if pilihan == 1:
        hasil = penjumlahan(angka1, angka2)
        print(f"Hasil penjumlahan antara {angka1:.2f} dengan {angka2:.2f} adalah {hasil:.2f}")
    elif pilihan == 2:
        hasil = pengurangan(angka1, angka2)
        print(f"Hasil pengurangan antara {angka1:.2f} dengan {angka2:.2f} adalah {hasil:.2f}")
    elif pilihan == 3:
        hasil = perkalian(angka1, angka2)
        print(f"Hasil perkalian antara {angka1:.2f} dengan {angka2:.2f} adalah {hasil:.2f}")
    elif pilihan == 4:
        hasil = pembagian(angka1, angka2)
        print(f"Hasil pembagian antara {angka1:.2f} dengan {angka2:.2f} adalah {hasil:.2f}")