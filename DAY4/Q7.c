#include <stdio.h>

int main() {
    int size;
    scanf("%d", &size);

    int numbers[size];

    // Taking array input
    for (int i = 0; i < size; i++) {
        scanf("%d", &numbers[i]);
    }

    // Reversing the array using index swapping
    for (int i = 0; i < size / 2; i++) {
        int swap_value;
        swap_value = numbers[i];
        numbers[i] = numbers[size - i - 1];
        numbers[size - i - 1] = swap_value;
    }

    // Printing reversed array
    for (int i = 0; i < size; i++) {
        printf("%d ", numbers[i]);
    }

    return 0;
}