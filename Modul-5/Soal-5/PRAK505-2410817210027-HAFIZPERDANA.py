def Biodata(tahunLahir, Namaku, Asal):
    tahun_sekarang = 2020
    umur = tahun_sekarang - tahunLahir
    print(f"\nPerkenalkan Nama Saya: {Namaku}")
    print(f"Umur Saya: {umur}")
    print(f"Saya Adalah Angkatan: {tahun_sekarang}")
    print(f"Asal Saya dari: {Asal}")

tahunLahir = int(input())
Namaku = input()
Asal = input()

Biodata(tahunLahir, Namaku, Asal)