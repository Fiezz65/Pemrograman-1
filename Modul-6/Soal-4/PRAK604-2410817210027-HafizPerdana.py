kode = input().strip()
pesan = input().strip()

bintang = 0
pagar = 0

if len(kode) != len(pesan):
    print("\nPanjang Kalimat berbeda, Pesan Palsu")
else:
    print("")
    panjang = len(kode)
    for i in range(panjang):
        if kode[i] == ' ' and pesan[i] == ' ':
            continue

        if kode[i] == pesan[i]:
            print("*", end="")
            bintang += 1
        else:
            print("#", end="")
            pagar += 1

    print("\n*={}".format(bintang))
    print("#={}".format(pagar))

    if bintang >= pagar:
        print("Pesan Asli")
    else:
        print("Pesan Palsu")