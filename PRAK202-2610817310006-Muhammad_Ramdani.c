#include <stdio.h>

int main() {
    float Nilai1, Nilai2, Hasil;

    printf("Masukkan Nilai Pertama : ");
    scanf("%f", &Nilai1);
    printf("Masukkan Nilai Kedua : ");
    scanf("%f", &Nilai2);
    Hasil = Nilai1 + Nilai2;
    printf("Hasil dari penjumlahan nilai pertama \"%g\" dan nilai kedua \"%g\" adalah \"%0.2f\"", Nilai1, Nilai2, Hasil);
}