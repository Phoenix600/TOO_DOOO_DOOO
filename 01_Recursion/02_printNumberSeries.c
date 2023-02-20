#include<stdio.h>

void printNumber(int num)
{
	// base-condition ]
	if(num < 1)
	{
		return ;
	}
	printNumber(num-1);
	printf("%d ",num);
}

int main()
{
	printf("Recursive function to print the number series : \n");
	printNumber(10);

	
}


/*
 * Blue-Print for the recursive functions 
 *	1. There must be a base condition to terminate the recursive calls 
 *	2. Every recursive call will take you closer to the base-case
 *	3. A function which calls itself, until the base condition becomes true.
 *
 *	Summary :
 *		A function calling itself is called recursion.
 *		Inside recursive function, there must be some base condition which will make
 *		the recursion stop.Once the base condition evaluates to true it will stop recursion.
 *
 */
