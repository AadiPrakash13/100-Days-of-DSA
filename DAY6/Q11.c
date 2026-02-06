#include <stdio.h>

int main() {
    int size;

    printf("Enter the total number of values: ");
    scanf("%d", &size);

    int data[size];

    printf("Enter the elements in sorted order:\n");
    for (int idx = 0; idx < size; idx++) {
        scanf("%d", &data[idx]);
    }

    printf("Array without duplicate elements:\n");

    if (size <= 0) {
        return 0;
    }

    int lastPrinted = data[0];
    printf("%d ", lastPrinted);

    for (int idx = 1; idx < size; idx++) {
        if (data[idx] != lastPrinted) {
            printf("%d ", data[idx]);
            lastPrinted = data[idx];
        }
    }

    return 0;
}
