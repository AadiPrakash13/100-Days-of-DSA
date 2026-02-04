#include <stdio.h>

int main(void) {
    int size, target;
    int comparisons = 0;

    scanf("%d", &size);

    int values[100];
    for (int idx = 0; idx < size; idx++) {
        scanf("%d", &values[idx]);
    }

    scanf("%d", &target);

    for (int idx = 0; idx < size; idx++) {
        comparisons++;

        if (values[idx] == target) {
            printf("Found at index %d\n", idx);
            printf("Comparisons = %d", comparisons);
            return 0;
        }
    }

    printf("Not Found\n");
    printf("Comparisons = %d", comparisons);

    return 0;
}
