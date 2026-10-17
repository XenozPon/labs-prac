#include <stdio.h>

int demo_mode = 0;
int demo_arr[100];
int demo_size;

void init_demo_array() {
    int demo_data[] = {5, 3, 8, 1, 9, 4, 7, 2, 6, 10, 15, 12, -3, 0, 11};
    demo_size = sizeof(demo_data) / sizeof(demo_data[0]);
    for (int i = 0; i < demo_size; i++) {
        demo_arr[i] = demo_data[i];
    }
}

void printArray(int arr[], int size){
    printf("Содержимое массива: < ");
    for (int d = 0; d < size; d++){
        printf("%d ", arr[d]);
    }
    printf(">\n");
}

void task6_1_1(){
    int arr[100];
    int size;
    
    if (demo_mode) {
        for (int i = 0; i < demo_size; i++) arr[i] = demo_arr[i];
        size = demo_size;
    } else {
start:
        printf("Сколько значений вы хотите ввести?: ");
        scanf("%d", &size);
        printf("Введите элементы через пробел: ");
        for (int i = 0; i < size; i++){
            scanf("%d", &arr[i]);
        }
    }
    
    int n;
    int demo_idx = 0;
    int demo_ops[] = {2, 3, 4, 5, 6, 7, 8, 11, 12, 13, 14, 15, 16};
    int num_ops = sizeof(demo_ops) / sizeof(demo_ops[0]);
    
    do {
        printArray(arr, size);
        
        if (demo_mode) {
            if (demo_idx >= num_ops) break;
            n = demo_ops[demo_idx++];
            printf("\n=== Демонстрация операции %d ===\n", n);
            if (demo_idx > 1) {
                for (int i = 0; i < demo_size; i++) arr[i] = demo_arr[i];
                size = demo_size;
                printArray(arr, size);
            }
        } else {
            printf("\nВыберите операцию:\n");
            printf("1 - Перезаписать массив\n");
            printf("2 - X10 для нечетных элементов\n");
            printf("3 - Найти минимальный элемент\n");
            printf("4 - Посчитать элементы больше 10\n");
            printf("5 - X2 для последнего четного\n");
            printf("6 - Сколько четных левее минимального\n");
            printf("7 - X10 для нечетных правее минимального\n");
            printf("8 - Переставить местами min и max\n");
            printf("11 - Удалить заданный элемент\n");
            printf("12 - Вставить новый элемент в заданное место\n");
            printf("13 - Удалить минимальный элемент\n");
            printf("14 - Перед минимальным элементом вставить 0\n");
            printf("15 - Удалить все четные элементы\n");
            printf("16 - Продублировать все четные элементы\n");
            printf("0 - Выход\n");
            scanf("%d", &n);
        }
        
        switch (n) {
        case 1:
            if (!demo_mode) goto start;
            break;
            
        case 2:
            for (int i = 0; i < size; i++){
                if (arr[i] % 2 != 0){
                    arr[i] *= 10;
                }
            }
            break;
            
        case 3:
            int min = arr[0];
            for (int i = 1; i < size; i++){
                if (arr[i] < min){
                    min = arr[i];
                }
            }
            printf("Минимальный элемент: %d\n", min);
            break;
            
        case 4:
            int count = 0;
            for (int i = 0; i < size; i++){
                if (arr[i] > 10){
                    count++;
                }
            }
            printf("Количество элементов больше 10: %d\n", count);
            break;
            
        case 5:
            for (int i = size - 1; i >= 0; i--){
                if (arr[i] % 2 == 0){
                    arr[i] *= 2;
                    break;
                }
            }
            break;
            
        case 6:
            int minVal6 = arr[0];
            int minIndex6 = 0;
            for (int i = 1; i < size; i++){
                if (arr[i] < minVal6){
                    minVal6 = arr[i];
                    minIndex6 = i;
                }
            }
            printf("Индекс минимального элемента = %d\n", minIndex6);
            int cnt6 = 0;
            for (int i = 0; i < minIndex6; i++){
                if (arr[i] % 2 == 0){
                    cnt6++;
                }
            }
            printf("Левее минимального %d четных элементов\n", cnt6);
            break;
            
        case 7:
            int minVal7 = arr[0];
            int minIndex7 = 0;
            for (int i = 1; i < size; i++){
                if (arr[i] < minVal7){
                    minVal7 = arr[i];
                    minIndex7 = i;
                }
            }
            printf("Индекс минимального элемента = %d\n", minIndex7);
            for (int i = minIndex7 + 1; i < size; i++){
                if (arr[i] % 2 != 0){
                    arr[i] *= 10;
                }
            }
            break;
        
        case 8:
            int indexMin = 0;
            int indexMax = 0;
            for (int i = 1; i < size; i++){
                if (arr[i] < arr[indexMin]){
                    indexMin = i;
                }
                if (arr[i] > arr[indexMax]){
                    indexMax = i;
                }
            }
            printf("Индекс минимального элемента = %d\n", indexMin);
            printf("Индекс максимального элемента = %d\n", indexMax);
            int tmp = arr[indexMin];
            arr[indexMin] = arr[indexMax];
            arr[indexMax] = tmp;
            break;
            
        case 11:
            int index;
            if (demo_mode) {
                index = 2;
                printf("Индекс удаляемого элемента = %d (демо)\n", index);
            } else {
                printf("Индекс удаляемого элемента = ");
                scanf("%d", &index);
            }
            if (index >= 0 && index < size){
                for (int i = index; i < size - 1; i++){
                    arr[i] = arr[i + 1];
                }
                size--;
            } 
            break;
            
        case 12:
            int idx;
            if (demo_mode) {
                idx = 3;
                printf("Перед каким элементом нужно вставить новый? Индекс = %d (демо)\n", idx);
            } else {
                printf("Перед каким элементом нужно вставить новый? Индекс = ");
                scanf("%d", &idx);
            }
            int value;
            if (demo_mode) {
                value = 99;
                printf("Значение, которое нужно вставить = %d (демо)\n", value);
            } else {
                printf("Значение, которое нужно вставить = ");
                scanf("%d", &value);
            }
            if (idx >= 0 && idx <= size && size < 100){
                for (int i = size; i > idx; i--){
                    arr[i] = arr[i - 1];
                }
                arr[idx] = value;
                size++;
            } 
            break;
            
        case 13:
            int minIdx = 0;
            for (int i = 1; i < size; i++){
                if (arr[i] < arr[minIdx]){
                    minIdx = i;
                }
            }
            printf("Удалён минимальный элемент %d на индексе %d\n", arr[minIdx], minIdx);
            for (int i = minIdx; i < size - 1; i++){
                arr[i] = arr[i + 1];
            }
            size--;
            break;
            
        case 14:
            int minIdx14 = 0;
            for (int i = 1; i < size; i++){
                if (arr[i] < arr[minIdx14]){
                    minIdx14 = i;
                }
            }
            if (size < 100){
                for (int i = size; i > minIdx14; i--){
                    arr[i] = arr[i - 1];
                }
                arr[minIdx14] = 0;
                size++;
            } 
            break;
            
        case 15:
            int h = 0;
            for (int k = 0; k < size; k++){
                if (arr[k] % 2 != 0){
                    arr[h++] = arr[k];
                }
            }
            size = h;
            break;
            
        case 16:
            if (size < 100){
                for (int i = size - 1; i >= 0; i--){
                    if (arr[i] % 2 == 0){
                        for (int j = size; j > i; j--){
                            arr[j] = arr[j - 1];
                        }
                        arr[i + 1] = arr[i];
                        size++;
                    }
                }
            } 
            break;
            
        case 0:
            printf("Выход из задания 6.1.1\n");
            break;
            
        default:
            printf("Неверный выбор!\n");
            break;
        }
    } while (demo_mode ? (demo_idx < num_ops) : (n != 0));
}

void task6_1_7(){
    int size;
    int arr[100];
    
    if (demo_mode) {
        for (int i = 0; i < demo_size; i++) arr[i] = demo_arr[i];
        size = demo_size;
    } else {
        printf("Сколько значений вы хотите ввести?: ");
        scanf("%d", &size);
        printf("Введите элементы через пробел: ");
        for (int i = 0; i < size; i++){
            scanf("%d", &arr[i]);
        }
    }
    
    for (int i = 0; i < size; i++){
        if (arr[i] % 2 == 0){
            arr[i] *= -1;
        }
    }
    
    printf("Результат:\n");
    printArray(arr, size);
}

void task6_1_8(){
    int size;
    int arr[100];
    
    if (demo_mode) {
        for (int i = 0; i < demo_size; i++) arr[i] = demo_arr[i];
        size = demo_size;
    } else {
        printf("Сколько значений вы хотите ввести?: ");
        scanf("%d", &size);
        printf("Введите элементы через пробел: ");
        for (int i = 0; i < size; i++){
            scanf("%d", &arr[i]);
        }
    }
    
    for (int i = 0; i < size; i++){
        if (arr[i] < 4){
            arr[i] = 4;
        }
    }
    
    printf("Результат:\n");
    printArray(arr, size);
}

void task6_1_9(){
    int size;
    int arr[100];
    
    if (demo_mode) {
        for (int i = 0; i < demo_size; i++) arr[i] = demo_arr[i];
        size = demo_size;
    } else {
        printf("Сколько значений вы хотите ввести?: ");
        scanf("%d", &size);
        printf("Введите элементы через пробел: ");
        for (int i = 0; i < size; i++){
            scanf("%d", &arr[i]);
        }
    }
    
    for (int i = 0; i < size - 1; i++){
        if (arr[i] % 2 != 0){
            arr[i + 1] = 0;
        }
    }
    
    printf("Результат:\n");
    printArray(arr, size);
}

void task6_1_10(){
    int size;
    int arr[100];
    
    if (demo_mode) {
        for (int i = 0; i < demo_size; i++) arr[i] = demo_arr[i];
        size = demo_size;
    } else {
        printf("Сколько значений вы хотите ввести?: ");
        scanf("%d", &size);
        printf("Введите элементы через пробел: ");
        for (int i = 0; i < size; i++){
            scanf("%d", &arr[i]);
        }
    }
    
    int indexMin = 0;
    int indexMax = 0;
    for (int i = 1; i < size; i++){
        if (arr[i] < arr[indexMin]){
            indexMin = i;
        }
        if (arr[i] > arr[indexMax]){
            indexMax = i;
        }
    }
    
    int left = indexMin < indexMax ? indexMin : indexMax;
    int right = indexMin > indexMax ? indexMin : indexMax;
    
    for (int i = left + 1; i < right; i++){
        arr[i] *= 10;
    }
    
    printf("Результат:\n");
    printArray(arr, size);
}

void task6_1_11(){
    int size;
    int arr[100];
    
    if (demo_mode) {
        for (int i = 0; i < demo_size; i++) arr[i] = demo_arr[i];
        size = demo_size;
    } else {
        printf("Сколько значений вы хотите ввести?: ");
        scanf("%d", &size);
        printf("Введите элементы через пробел: ");
        for (int i = 0; i < size; i++){
            scanf("%d", &arr[i]);
        }
    }
    
    int first = -1;
    int last = -1;
    
    for (int i = 0; i < size; i++){
        if (arr[i] % 2 == 0){
            if (first == -1){
                first = i;
            }
            last = i;
        }
    }
    
    if (first != -1 && last != -1 && last - first > 1) {
        for (int i = first + 1; i < last; i++){
            arr[i] *= 100;
        }
    } else {
        printf("Между первым и последним четным нет элементов для умножения.\n");
    }
    
    printf("Результат:\n");
    printArray(arr, size);
}

void lab_6_1() {
    if (demo_mode) {
        printf("\n=== Демонстрация lab6.1 ===\n");
        printf("\n--- Задание 6.1.1 ---\n");
        task6_1_1();
        printf("\n--- Задание 6.1.7 ---\n");
        task6_1_7();
        printf("\n--- Задание 6.1.8 ---\n");
        task6_1_8();
        printf("\n--- Задание 6.1.9 ---\n");
        task6_1_9();
        printf("\n--- Задание 6.1.10 ---\n");
        task6_1_10();
        printf("\n--- Задание 6.1.11 ---\n");
        task6_1_11();
        printf("\n=== Демонстрация lab6.1 завершена ===\n");
        return;
    }
    
    int n;
    do{
        printf("\nвыполнение кода lab6.1\n");
        printf("Выберите задание:\n");
        printf("1 - 6.1.1\n");
        printf("2 - 6.1.7\n");
        printf("3 - 6.1.8\n");
        printf("4 - 6.1.9\n");
        printf("5 - 6.1.10\n");
        printf("6 - 6.1.11\n");
        printf("0 - выход\n");
        printf("\n");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            task6_1_1();
            break;
        
        case 2:
            task6_1_7();
            break;
            
        case 3:
            task6_1_8();
            break;
            
        case 4:
            task6_1_9();
            break;
            
        case 5:
            task6_1_10();
            break;
            
        case 6:
            task6_1_11();
            break;
            
        case 0:
            printf("Выход из lab6.1\n");
            break;
            
        default:
            printf("Неверный выбор!\n");
            break;
        }
    } while(n != 0);
}

void task6_2_7(){
    int arr[100];
    int size;
    
    if (demo_mode) {
        for (int i = 0; i < demo_size; i++) arr[i] = demo_arr[i];
        size = demo_size;
    } else {
        printf("Сколько значений вы хотите ввести?: ");
        scanf("%d", &size);
        printf("Введите элементы через пробел: ");
        for (int i = 0; i < size; i++){
            scanf("%d", &arr[i]);
        }
    }
    
    int minIdx = 0;
    for (int i = 1; i < size; i++){
        if (arr[i] < arr[minIdx]){
            minIdx = i;
        }
    }
    
    if (size < 100){
        for (int i = size; i > 0; i--){
            arr[i] = arr[i - 1];
        }
        arr[0] = arr[minIdx + 1];
        size++;
    }
    
    printf("Результат:\n");
    printArray(arr, size);
}

void task6_2_8(){
    int arr[100];
    int size;
    
    if (demo_mode) {
        for (int i = 0; i < demo_size; i++) arr[i] = demo_arr[i];
        size = demo_size;
    } else {
        printf("Сколько значений вы хотите ввести?: ");
        scanf("%d", &size);
        printf("Введите элементы через пробел: ");
        for (int i = 0; i < size; i++){
            scanf("%d", &arr[i]);
        }
    }
    
    int h = 0;
    for (int k = 0; k < size; k++){
        if (arr[k] >= 4){
            arr[h++] = arr[k];
        }
    }
    size = h;
    
    printf("Результат:\n");
    printArray(arr, size);
}


void task6_2_9(){
    int arr[100];
    int size;
    
    if (demo_mode) {
        for (int i = 0; i < demo_size; i++) arr[i] = demo_arr[i];
        size = demo_size;
    } else {
        printf("Сколько значений вы хотите ввести?: ");
        scanf("%d", &size);
        printf("Введите элементы через пробел: ");
        for (int i = 0; i < size; i++){
            scanf("%d", &arr[i]);
        }
    }
    
    int lastOddIdx = -1;
    for (int i = size - 1; i >= 0; i--){
        if (arr[i] % 2 != 0){
            lastOddIdx = i;
            break;
        }
    }
    
    if (lastOddIdx != -1){
        printf("Последний нечетный элемент %d на индексе %d удалён\n", arr[lastOddIdx], lastOddIdx);
        for (int i = lastOddIdx; i < size - 1; i++){
            arr[i] = arr[i + 1];
        }
        size--;
    } else {
        printf("Нечетных элементов не найдено!\n");
    }
    
    printf("Результат:\n");
    printArray(arr, size);
}

void task6_2_10(){
    int arr[100];
    int size;
    
    if (demo_mode) {
        for (int i = 0; i < demo_size; i++) arr[i] = demo_arr[i];
        size = demo_size;
    } else {
        printf("Сколько значений вы хотите ввести?: ");
        scanf("%d", &size);
        printf("Введите элементы через пробел: ");
        for (int i = 0; i < size; i++){
            scanf("%d", &arr[i]);
        }
    }
    
    int sum = 0;
    int count = 0;
    for (int i = 0; i < size; i++){
        if (arr[i] % 2 == 0){
            sum += arr[i];
            count++;
        }
    }
    
    if (count == 0){
        printf("Четных элементов нет, среднее не определено.\n");
        printArray(arr, size);
        return;
    }
    
    double avg = (double)sum / count;
    printf("Среднее арифметическое четных элементов: %.2f\n", avg);
    
    int h = 0;
    for (int k = 0; k < size; k++){
        if (arr[k] >= avg){
            arr[h++] = arr[k];
        }
    }
    size = h;
    
    printf("Результат:\n");
    printArray(arr, size);
}

void task6_2_11(){
    int arr[100];
    int size;
    
    if (demo_mode) {
        for (int i = 0; i < demo_size; i++) arr[i] = demo_arr[i];
        size = demo_size;
    } else {
        printf("Сколько значений вы хотите ввести?: ");
        scanf("%d", &size);
        printf("Введите элементы через пробел: ");
        for (int i = 0; i < size; i++){
            scanf("%d", &arr[i]);
        }
    }
    
    int write = 0;
    int i = 0;
    
    while (i < size) {
        if (arr[i] % 2 != 0) {
            int start = i;
            while (i < size && arr[i] % 2 != 0) {
                i++;
            }
            int len = i - start;
            
            if (len >= 3) {
                for (int j = start; j < i; j++) {
                    arr[write++] = arr[j];
                }
            }
        } else {
            arr[write++] = arr[i];
            i++;
        }
    }
    
    size = write;
    
    printf("Результат:\n");
    printArray(arr, size);
}

void lab_6_2() {
    if (demo_mode) {
        printf("\n=== Демонстрация lab6.2 ===\n");
        printf("\n--- Задание 6.2.7 ---\n");
        task6_2_7();
        printf("\n--- Задание 6.2.8 ---\n");
        task6_2_8();
        printf("\n--- Задание 6.2.9 ---\n");
        task6_2_9();
        printf("\n--- Задание 6.2.10 ---\n");
        task6_2_10();
        printf("\n--- Задание 6.2.11 ---\n");
        task6_2_11();
        printf("\n=== Демонстрация lab6.2 завершена ===\n");
        return;
    }
    
    int n;
    do{
        printf("\nвыполнение кода lab6.2\n");
        printf("Выберите задание:\n");
        printf("1 - 6.2.7 (Добавить в начало элемент, равный минимальному)\n");
        printf("2 - 6.2.8 (Удалить все элементы меньше 4)\n");
        printf("3 - 6.2.9 (Из массива удалить последний из нечетных элементов.)\n");
        printf("4 - 6.2.10 (Из массива удалить элементы, имеющие значение меньше среднего арифметического четных элементов массива.) \n");
        printf("5 - 6.2.11 (Из массива удалить цепочки из нечетных элементов, состоящие менее чем из трех элементов.)\n");
        printf("6 - 6.2.12 (ассемблерный код)\n");
        printf("0 - выход\n");
        printf("\n");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            task6_2_7();
            break;
        
        case 2:
            task6_2_8();
            break;
        case 3:
            task6_2_9();
            break;
        case 4:
            task6_2_10();
            break;
        case 5:
            task6_2_11();
            break;
        case 0:
            printf("Выход из lab6.2\n");
            break;
            
        default:
            printf("Неверный выбор!\n");
            break;
        }
    } while(n != 0);
}

int main() {
    int mode;
    printf("Выберите режим:\n");
    printf("1 - Обычный режим\n");
    printf("2 - Демо-режим (автопоказ)\n");
    scanf("%d", &mode);
    
    if (mode == 2) {
        demo_mode = 1;
        init_demo_array();
    }

    int n;
    
    do {
        printf("Выберите лабу:\n");
        printf("1 - лаб_6.1\n");
        printf("2 - лаб_6.2\n");
        printf("0 - выход\n");
        scanf("%d", &n);
        switch (n) {
        case 1:
            lab_6_1();
            break;
        case 2:
            lab_6_2();
            break;
        case 0:
            printf("Выход из программы.\n");
            break;
        default:
            printf("Неверный выбор! Попробуйте снова.\n");
            break;
        }
    } while (n != 0);
    return 0;
}