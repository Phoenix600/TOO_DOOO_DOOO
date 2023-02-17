#include <stdio.h>

int main()
{
    int A[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int B[sizeof(A) / sizeof(A[0])];
    int C[sizeof(A) / sizeof(A[0])];

    int nSize = sizeof(A) / sizeof(A[0]);

    // Easy Way To Copy Array
    for (int i = 0; i < nSize; i++)
    {
        B[i] = A[i];
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", B[i]);
    }
    printf("\n");

    // Let's fuck up your brain XD
    while (nSize)
    {
        C[10 - nSize] = A[10 - nSize];
        nSize--;
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", C[i]);
    }

    return 0;
}