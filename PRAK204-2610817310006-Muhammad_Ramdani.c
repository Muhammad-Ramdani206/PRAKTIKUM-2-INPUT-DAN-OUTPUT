#include <stdio.h>

int main() {
    float Pi = 22.0 / 7.0;
    float r, t, Volume;
    float luas, keliling;

    scanf("%f", &r);
    scanf("%f", &t);

    Volume = Pi * r * r * t;
    luas = 2 * Pi * r * (r + t);
    keliling = 2 * Pi * r;

    printf("Volume = %.2f\n", Volume);
    printf("Luas = %.2f\n", luas);
    printf("Keliling = %.2f", keliling);
}