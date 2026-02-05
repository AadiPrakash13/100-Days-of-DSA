#include <stdio.h>

int main() {
    int n1, n2, i = 0, j = 0;

    scanf("%d", &n1);
    int a[n1];
    for (int k = 0; k < n1; k++)
        scanf("%d", &a[k]);

    scanf("%d", &n2);
    int b[n2];
    for (int k = 0; k < n2; k++)
        scanf("%d", &b[k]);

    while (i < n1 && j < n2) {
        if (a[i] <= b[j]) {
            printf("%d ", a[i]);
            i++;
        } else {
            printf("%d ", b[j]);
            j++;
        }
    }

    while (i < n1) {
        printf("%d ", a[i]);
        i++;
    }

    while (j < n2) {
        printf("%d ", b[j]);
        j++;
    }

    return 0;
}