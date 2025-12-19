#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    int first, second, prev, current, num;
    int count = 0;

    file = fopen("numbers.txt", "r");
    if (file == NULL) {
        printf("Ошибка открытия файла.\n");
        return -1;
    }

    if (fscanf(file, "%d", &first) != 1) {
        printf("Файл пуст или содержит некорректные данные.\n");
        fclose(file);
        return -1;
    }
    count++;

    if (fscanf(file, "%d", &second) != 1) {
        printf("Файл содержит меньше двух элементов.\n");
        fclose(file);
        return -1;
    }
    count++;
    prev = second;

    if (fscanf(file, "%d", &current) != 1) {
        printf("Файл содержит меньше трёх элементов.\n");
        fclose(file);
        return -1;
    }
    count++;

    while (fscanf(file, "%d", &num) == 1) {
        prev = current;
        current = num;
        count++;
    }

    if (count < 4) {
        printf("Файл содержит менее четырёх элементов.\n");
        fclose(file);
        return -1;
    }

    printf("Первый элемент: %d\n", first);
    printf("Второй элемент: %d\n", second);
    printf("Предпоследний элемент: %d\n", prev);
    printf("Последний элемент: %d\n", current);

    fclose(file);
    return 0;
}