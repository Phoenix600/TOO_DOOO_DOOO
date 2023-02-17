#include<stdio.h>
#include<stdlib.h>

int main()
{
    // You can not increase the size of same array directly, 
    // But With the help of pointer you can increase the size 
    int* p;
    int* q;
    int number_of_elements = 5;

    // Creating the array dynamically using pointer 
    p = (int*)malloc(number_of_elements*sizeof(int));
    
    // Assigning the elements to the array 
    p[0] = 1;
    p[1] = 2;
    p[2] = 3;
    p[3] = 4;
    p[4] = 5;


    // printing the array elements 
    for (int i = 0; i < number_of_elements; i++)
    {
            printf("%d ",p[i]);
    }
    printf("\n");
    
    // Creating the new array of double the size of previous one 
    int formulatedSize = number_of_elements*2+2;
    number_of_elements = formulatedSize;
    
    q = (int*)malloc(formulatedSize*sizeof(int));

    // copying the elements of array p to q
    for (int i = 0; i < number_of_elements; i++)
    {
        q[i] = p[i];
    }
    
    // Deleting the memeory pointed by the array p
    free(p);
    // Now p pointer is pointing to the same location of q, which is poiting the array 
    p = q;
    
    // Removing the reference of the q, 
    q = NULL;

    // Finally we have indirectly chnaged the size of same array 

    // printing the array elements 
    for (int i = 0; i < number_of_elements; i++)
    {
            printf("%d ",p[i]);
    }
    printf("\n");    
 
    return 0;
}