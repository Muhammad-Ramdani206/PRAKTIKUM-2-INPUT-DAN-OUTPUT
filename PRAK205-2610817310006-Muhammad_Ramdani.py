import math

A = int(input(""))
B = int(input(""))

C = math.sqrt(B * B - A * A)
Keliling = A + B + C
Luas = 0.5 * C * A

print(f"Alas = {C:.0f} cm")
print(f"Tinggi = {A:.0f} cm")
print(f"Keliling = {Keliling:.0f} cm")
print(f"Luas = {Luas:.0f} cm^2")