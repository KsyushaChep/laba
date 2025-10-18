#include <stdio.h>

int main() {
    const float PI = 3.14;
    float R, L, S;

    printf("Введите радиус R: ");
    scanf("%f", &R);

    L = 2 * PI * R;
    S = PI * R * R;

    printf("Длина окружности: %.2f\n", L);
    printf("Площадь круга: %.2f\n", S);

    return 0;
}