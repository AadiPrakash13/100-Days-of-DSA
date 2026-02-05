void merge(
    int *a, int aSize, int x,
    int *b, int bSize, int y
) {
    int p = x - 1;          // index of last valid element in a
    int q = y - 1;          // index of last element in b
    int pos = x + y - 1;    // position to fill in a

    while (p >= 0 && q >= 0) {
        if (a[p] >= b[q]) {
            a[pos] = a[p];
            p--;
        } else {
            a[pos] = b[q];
            q--;
        }
        pos--;
    }

    while (q >= 0) {
        a[pos] = b[q];
        q--;
        pos--;
    }
}