#include <stdio.h> // Что подключить?

void printArray(int arr[], int *size) { // `arr[]` читается как "указатель на int"
    for(int i = 0; i < *size; i++) {
        arr[i] = 'b';
        // printf("%d ", arr[i]); // Работает как с обычным массивом
    }
    size = size++;
    printf("%d", *size);
    printf("\n");
    printf("%d", size);
}

int main() {
    int size = 5;
    int myArray[5] = {1,2,3,4,5};
    printf("%d", size);
    printf("\n");
    printf("%d", &size);
    printf("\n");
    printArray(myArray, &size); // Передаем имя массива (его адрес) и размер
    printf("\n");
    printf("%d\n", size);
    printf("\n");
    return 0;
}
