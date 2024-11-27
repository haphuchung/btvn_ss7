#include <stdio.h>

int main() {
    int arr[5] = {3, 7, 2, 8, 5};

    printf("Phan tu lon nhat: %d\n", arr[0]);
    printf("Phan tu nho nhat: %d\n", arr[0]);

    for (int i = 1; i < 5; i++) {
        if (arr[i] > arr[0]) {
            printf("Phan tu lon nhat: %d\n", arr[i]);
        }
        if (arr[i] < arr[0]) {
            printf("Phan tu nho nhat: %d\n", arr[i]);
        }
    }

    return 0;
}






