#include <stdio.h>

int main() {
    int number, tens, units, sum;
    
    // Ввод двузначного числа
    printf("Введите двузначное число: ");
    scanf("%d", &number);
    
    // Проверка на корректность ввода
    if (number < 10 || number > 99) {
        printf("Ошибка: введено не двузначное число.\n");
        return 1;
    }
    
    // Вычисление цифр числа
    tens = number / 10;    // Десятки
    units = number % 10;   // Единицы
    
    // Вычисление суммы цифр
    sum = tens + units;
    
    // Вывод результата
    printf("Сумма цифр: %d\n", sum);
    
    return 0;
}