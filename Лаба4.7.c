#include <stdio.h>

int main() {
    double a, b;

    printf("Введите два числа: ");
    scanf("%lf %lf", &a, &b);

    if (a < b) {
        printf("1\n"); 
    } else if (b < a) {
        printf("2\n"); // 
    } else {
        printf("0\n"); // 
    }

    return 0;
}