#include<stdio.h>
#include <string.h>
#include<stdlib.h>
#include<stdbool.h>
#include<time.h>

/*
 * This will be used to increment the salary of the 
 * employee by 10% i.e 0.1 
 */
const float hikeAmount = 0.1;

struct EmployeeDB 
{
	int id;
	char firstName[25];
	char lastName[25];
	char design[15];
	float salary;
	int quantity;
	float salesAmount;
	bool giveHike;
};

char employeeFirstNames[10][25] = {{"Sheldon"},{"Howard"},{"Rajesh"},{"Bernaded"},{"Penny"},{"Leonard"},{"Stuart"},{"Ram"},{"Peter"},{"Brian"}};
char employeeLastNames[10][25]={{"Cooper"},{"Walowards"},{"Kutrapali"},{"Benri"},{"lane"},{"Hofstater"},{"Wick"},{"Sulfia"},{"Griffin"},{"Brown"}};
char designation[10][25] = {"Designer","UI-UX designer","PenTester","Social Engineer","Cheff","Newtwork Analyst","Data Scientist","Baker","Writer","Porgrammer"};

int main()
{
	srand(time(NULL)); // This will genrate the random number without repeatition

	struct EmployeeDB* data[50];

	for (int i=0; i<50; i++) {
		data[i] = (struct EmployeeDB*)malloc(50*sizeof(struct EmployeeDB));
	}

	// Setting pre-defined data 
	for (int i=0; i<50; i++) {
	
		(data[i])->id = i+rand()*2323;
		
		strcpy(data[i]->firstName,employeeFirstNames[rand()%10]);
		strcpy(data[i]->lastName,employeeLastNames[rand()%10]);		
		strcpy(data[i]->design,designation[rand()%10]);

		data[i]->quantity = rand()%25;
		data[i]->salesAmount = rand()+25454;
		data[i]->salary = (rand()*100) + 13000;
		data[i]->giveHike = false;

		data[i]->salesAmount > 50000 ? data[i]->giveHike = true : false;
		data[i]->giveHike ? data[i]->salary *=0.1 : false;

	}
	
	for (int i = 0; i < 50; i++)
	{
		if(data[i]->giveHike)
		{
			printf("%f \n",data[i]->salary);
		}
	}


	printf("[+]Employee Names \t\t Designation \t\tSales Amount \t\tSalary\n");
	for (int i = 0; i < 50; i++)
	{
		printf("%12s %12s %24s \t%f \t%12f\n",data[i]->firstName,data[i]->lastName,data[i]->design,data[i]->salesAmount,data[i]->salary);
	}
	
	printf("===================================================================================================\n");
	printf("######################## EMPLOYESS WITH MORE THAN 50K SALES AMOUNT ################################\n");
	printf("===================================================================================================\n");
	printf("FirstName LastName \t\t\tDesignation \tSales Amount \tSalary\n");
	for (int i = 0; i < 50; i++)
	{
		if(data[i]->giveHike)
			printf("%12s %12s %24s \t%f \t%12f\n",data[i]->firstName,data[i]->lastName,data[i]->design,data[i]->salesAmount,data[i]->salary);
	}

	

	// strcpy(data[0]->name,"Sara");

	/* for (int i=0; i<50; i++) { */
	
		// /* printf("%d \n",(data[i])->id); */
	/* } */

	// printf("[+]Name :	%s \n[+]ID	:	%d\n",data[0]->name,data[0]->id);

	// for (int i = 0; i < 50; i++)
	// {
	// 	printf("%s %s\n",employeeFirstNames[rand()%6],employeeLastNames[rand()%6]);
	// }
	

	return 0;
}



/*
 *  A marketing company is having 50 employees and it maintains employee records in 
 *  terms of their empid, empname, desg, salary, quantity, sales amount. The company 
 *  gives 10% hike in salary to the employees if their sales amount is more than 50000/-, 
 *  Write a C program that displays the employee records that got hike in salary.
 */
