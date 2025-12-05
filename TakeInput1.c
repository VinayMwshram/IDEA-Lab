#include<stdio.h>
#include<stdlib.h>

int main()
{
	int num,i;

	printf("Enter how many time do you want to print the message: ");
	scanf("%d", &num);

	if (num<=0)

	{
		printf("You don't see any message bcz Input is Invalid !!!");
		exit (0);
	}

	for (i=1;i<=num;i++)
	{
		printf("Prasad Santosh Mandavkar. \n");
	}

	return 0;
}