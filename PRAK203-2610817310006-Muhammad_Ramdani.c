#include <stdio.h>

int main() {
    float a, b, i, j, x, y;
    float Hasil;

    printf(""); scanf("%f", &a);
    printf(""); scanf("%f", &b);
    printf(""); scanf("%f", &i);
    printf(""); scanf("%f", &j);
    printf(""); scanf("%f", &x);
    printf(""); scanf("%f", &y);

    Hasil = (a - b) * i / j - (x + y);
    printf("%.3f\n", Hasil);
}