#include <stdio.h>
#include <math.h>

int main() {
    int A, B, C;
    int Keliling, Luas;

    scanf("%d", &A);
    scanf("%d", &B);

    C = sqrt(B * B - A * A);
    Keliling = A + B + C;
    Luas = 0.5 * C * A;

    printf("Alas = %d cm\n", C);
    printf("Tinggi = %d cm\n", A);
    printf("Keliling = %d cm\n", Keliling);
    printf("Luas = %d cm^2", Luas);
}