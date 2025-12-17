#include <stdio.h>

int main() {
    int unit_number;
    double mass, result;
    
    printf("Введите номер единицы массы (1-5):\n");
    printf("1 - килограмм\n");
    printf("2 - миллиграмм\n");
    printf("3 - грамм\n");
    printf("4 - тонна\n");
    printf("5 - центнер\n");
    scanf("%d", &unit_number);
    
    printf("Введите массу: ");
    scanf("%lf", &mass);
    
    switch(unit_number) {
        case 1: 
            result = mass;
            break;
        case 2: 
            result = mass * 0.000001;
            break;
        case 3: 
            result = mass * 0.001;
            break;
        case 4: 
            result = mass * 1000;
            break;
        case 5: 
            result = mass * 100;
            break;
        default:
            printf("Ошибка: номер единицы массы должен быть от 1 до 5\n");
            return 1;
    }
    
    printf("Масса в килограммах: %.6lf кг\n", result);
    
    return 0;
}