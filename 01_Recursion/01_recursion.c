#include<stdio.h>

void sampleFunction(int n)
{
	if(n<1){return;}
	printf("Hello World\n");
	sampleFunction(n-1);
}

int main()
{
	sampleFunction(10);
	return 0;
}

/**
 * A function which call a copy of itself for a smaller amount of work is called recursive
 * function.
 *
 * Recursion is a method of breaking the bigger problem into bunch of sub-problems 
 *
 * Recursion uses the mechanism called "Divide And Conquer".
 *
 * Split the term  Divide And Conquer : 
 *	* [DIVIDE] : 
 *		This involves the divding the problem into smaller sub-problems.
 *	* [Conquer] :
 *		Solve sub-problems by calling it recursively until it is solved.
 *	* [Combine] : 
 *		Combine the sub-problem to get the final solution of the whole problem.
 */
