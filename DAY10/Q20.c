#include <stdlib.h>

int* intersect(int* a, int aSize, int* b, int bSize, int* returnSize)
{
    int maxSize = (aSize < bSize) ? aSize : bSize;
    int* ans = (int*)malloc(sizeof(int) * maxSize);

    int count = 0;

    for (int x = 0; x < aSize; x++)
    {
        for (int y = 0; y < bSize; y++)
        {
            if (a[x] == b[y])
            {
                ans[count] = a[x];
                count++;

                b[y] = -1001;   // mark element as already used
                break;
            }
        }
    }

    *returnSize = count;
    return ans;
}