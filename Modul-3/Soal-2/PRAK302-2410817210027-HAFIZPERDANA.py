nilai = int(input(""))

if nilai > 100 or nilai < 0:
    print("Error")
elif nilai >= 80:
    print("A")
elif nilai >= 70:
    print("B")
elif nilai >= 60:
    print("C")
elif nilai >= 50:
    print("D")
else:
    print("E")