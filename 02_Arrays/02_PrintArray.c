#include<stdio.h>

int main()
{
    // You can print the array content :
    // Two Ways :
    // 1. Naive Way 
    // 2. Using Loop 

    int A[10];
    A[0] = 11;
    A[1] = 12;
    A[2] = 13;
    A[3] = 14;
    A[4] = 16;
    A[5] = 17;
    A[6] = 18;
    A[7] = 19;
    A[8] = 20;
    A[9] = 21; 

    printf("A[0]    :   %d\n",A[0]);
    printf("A[0]    :   %d\n",A[1]);
    printf("A[0]    :   %d\n",A[2]);
    printf("A[0]    :   %d\n",A[3]);
    printf("A[0]    :   %d\n",A[4]);
    printf("A[0]    :   %d\n",A[5]);
    printf("A[0]    :   %d\n",A[6]);
    printf("A[0]    :   %d\n",A[7]);
    printf("A[0]    :   %d\n",A[8]);
    printf("A[0]    :   %d\n",A[9]);


    printf("[+]Printing Arrays using the LOOP\n");

    // Printing the array using the For-LOOP 
    for (int i = 0; i < 10; i++)
    {
        printf("A[%d]   :   %d\n",i+1,A[i]);
    }
    
    // Printing Array Using the While Loop : Method-1 
    printf("Printing The Array Elements using the While Loop\n");
    int SIZE = 0;
    while(SIZE!=10)
    {
        printf("%d ",A[SIZE++]);
    }

    printf("\n");

    // Printing Array Using the While Loop : Method-2 
    int COUNT = 10;
    while(SIZE)
    {
        printf("%d ",A[10-SIZE--]);
    }
    printf("\n");
    
    // Printing Array using the Do-While Loop : Method-1
    int nSize = 10;
    do{
        printf("%d ",A[10-nSize--]);
    }while(nSize);
    printf("\n");


    // Printing Array using the Do-While Loop : Method-2
    int arraySize = 0;
    do{
        printf("%d ",A[arraySize++]);
    }while(arraySize!=10);

    return 0;
}