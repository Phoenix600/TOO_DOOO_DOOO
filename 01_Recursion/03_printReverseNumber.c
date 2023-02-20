#include<stdio.h>

// Recursive function 
void printReverseNumber(int num)
{
	// base-condition to stop recursive calls 
	if(num<1)
		return ;
	printf("%d ",num); 
	return printReverseNumber(num-1); // Implementing the Divde and Coquer
}

int main()
{
	printf("Printing the reverse number series using the recusrive function : \n");
	printReverseNumber(10);
	return 0;
}
