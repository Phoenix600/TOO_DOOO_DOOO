#include<stdio.h>
#include<stdlib.h>

int main()
{
    // 2D Arrays are just the array of arrays, where each array element is 
    // pointing to another array .
    // There are 3 ways to declare 2D array, 
    /**
     * 1. Static 2D Arrays : These Array are created in the stack only 
     * 2. Array of pointer : Where each pointer will point to new array 
     * 3. 2D pointer method : where first layer of pointer will point of pointer which will 
     * be pointing the array of the pointers 
    */ 

    /**
     * For this tutorial we will be creating the same matrix or tabular 
     * data using 2D arrays by implementing above three methods 
     * Sample Example : 
     *          1   2   3
     *          4   5   6
     *          7   8   9   [3]x[3]
    */

    /**
     * 1 Static 2D Arrays : Stack Arrays 
    */

    int MATRIX[3][3];

    // First Row 
        MATRIX[0][0] = 1;
    MATRIX[0][1] = 2;
    MATRIX[0][2] = 3;
    
    // Second Row 
    MATRIX[1][0] = 4;
    MATRIX[1][1] = 5;
    MATRIX[1][2] = 6;

    // Third Row 
    MATRIX[2][0] = 7;
    MATRIX[2][1] = 8;
    MATRIX[2][2] = 9;

    // Lets Mess-Up Your Head Again XD...
    // Displaying the array elements 
    for(int i=0; i<sizeof(MATRIX)/sizeof(MATRIX[i]); i++)
    {
        for(int j=0; j<sizeof(MATRIX[i])/sizeof(MATRIX[i][j]);j++)
        {
            printf("%d ",MATRIX[i][j]);
        }
    }

    printf("\n");

    // Easy Way to print the array elements 
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("ARRAY[%d][%d]   :   %d\n",i,j,MATRIX[i][j]);
        }
        
    }
    


    // You thought this will be easy, 
    // Life becomes easy when do hard things... vice versa
    // Get more comfortable for being uncomfortable

    // Creating the 2D array using the Array of pointers 
    int *MATRIX2[3];
    // Notice : What's happening here , We have declared the array 
    // of pointers which will be pointing to some contigous memory location 
    // after allocating the memory to them.

    // printf("%d",sizeof(MATRIX2)/sizeof(MATRIX2[0]));

    // Allocating the memeory for the pointer, for storing the array elements 
    for (int i = 0; i < sizeof(MATRIX2)/sizeof(MATRIX2[0]); i++){
                // Suppose we are creating the array of size 3x3
                MATRIX2[i] = (int*)malloc(3*sizeof(int));
    }
    
    int value = 1;
    // Assigning the array elements 
    for (int i = 0; i < sizeof(MATRIX2)/sizeof(MATRIX2[0]); i++)
    {
        for (int j = 0; j < sizeof(MATRIX2)/sizeof(MATRIX2[0]); j++)
        {
                MATRIX2[i][j] = value++;
        }
        
    }

    for (int i = 0; i < sizeof(MATRIX2)/sizeof(MATRIX2[0]); i++)
    {
        for (int j = 0; j < sizeof(MATRIX2)/sizeof(MATRIX2[j]); j++)
        {
            printf("%d ",MATRIX2[i][j]);
        }
        
    }

    // ########### Everybody is a  gangsta... until the pointer comes.    

    // Creating the 2D array using 2D pointer 
    int **MATRIX3;

    // Following the ideal example of 3x3 matrix
    int nRow = 3;
    int nColumn = 3;

    // The above 2D pointer is, pointer to a pointer.
    // In simple words, It is a pointer which will point to the pointer and that 
    // second layer of pointer will point to array of pointer and then each pounter 
    // will point to their respective contigous memory block(Array)  

    MATRIX3 = (int**)malloc(nColumn*sizeof(int*));

    for (int i = 0; i < nColumn; i++)
    {
        MATRIX3[i] = (int*)malloc(nRow*sizeof(int));
    }
    
    // Assigning array elements :
    value = 1;

    for (int i = 0; i < nColumn; i++)
    {
        for (int j = 0; j < nRow; j++)
        {
            MATRIX3[i][j] = value++;
        }
        
    }
    

    printf("\n");
    for (int i = 0; i < nColumn; i++)
    {
        for (int j = 0; j < nRow; j++)
        {
            printf("%d ",MATRIX3[i][j]);
        }
        
    }

    return 0;
}