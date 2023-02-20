#include<stdio.h>
#include<stdlib.h>

// Stack Array
void Foo1()
{
    // The whole arrays is created inside the stack only 
    int A[3][3] = {{111,121,131},{141,151,161},{171,181,191}};

    printf("Stack Arrays : \n");

    for(int index=0; index < 3; index++)
    {
        for (int i = 0; i < 3; i++)
        {
            printf("%d ",A[index][i]);
        }
        printf("\n");        
    }
    printf("\n");

}

// Partial Stack and Partial Heap 
void Foo2()
{
    // Three pointer variables are created in the stack 
    // each integer pointer will point to the 3 contigious memory location (Arrays)
    int* A[3];

    for (int i = 0; i < 3; i++)
    {
        A[i] = (int*)malloc(3*sizeof(int));
    }

    A[0][0] = 1;
    A[0][1] = 2;
    A[0][2] = 3;

    A[1][0] = 4;
    A[1][1] = 5;
    A[1][2] = 6;

    A[2][0] = 7;
    A[2][1] = 8;
    A[2][2] = 9;

    printf("Partial Stack And Partial Heap Array : \n");
    // printing the array elements 
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

// Complete Heap array 
void Foo3()
{
    int**A; // A 2d integer pointer is created in stack.
    // which may point to the number of integer pointer and finally 
    // these integer pointers may also point to the contigous memory block(Arrays)

    A = (int**)malloc(3*sizeof(int*));

    for (int i = 0; i < 3; i++)
    {
        A[i] = (int*)malloc(3*sizeof(int));
    }

 
    A[0][0] = 101;
    A[0][1] = 102;
    A[0][2] = 103;

    A[1][0] = 104;
    A[1][1] = 105;
    A[1][2] = 106;

    A[2][0] = 107;
    A[2][1] = 108;
    A[2][2] = 109;
     
    printf("Complete Heap Array : \n");
    // printing the array elements 
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ",A[i][j]);
        }
            printf("\n");
    }  
    
}

int main()
{
    Foo1();
    Foo2();
    Foo3();
    return 0;
}
