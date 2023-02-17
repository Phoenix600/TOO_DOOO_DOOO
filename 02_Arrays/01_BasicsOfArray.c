#include<stdio.h>

int main()
{
    // This is how you declare the array 
    int A[5];
    
    // Initilizing the Array elements 
    A[0] = 10;
    A[1] = 11;
    A[2] = 12;
    A[3] = 13;
    A[4] = 14;


    // Another Way to declare the array 
    int B[] = {1,2,3,4,5,6,7,8};
    int C[5] = {1,2,0}; // Yes This Is Also possible
    int D[5] = {0}; // So It is 
    int E[12];

    printf("E[0]  :  %d\n",E[0]);
    printf("E[1]  :  %d\n",E[1]);
    printf("E[2]  :  %d\n",E[2]);
    printf("E[3]  :  %d\n",E[3]);

    // Character Array 
    char name[255] = "This is the part where I Tell you I'm fine";
    printf("%s",name);
    
    return 0;
}