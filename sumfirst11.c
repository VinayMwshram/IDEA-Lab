#include<stdio.h>

int main()
{
	int num,i,ans;

	printf("Find Sum of first numbers: ");
	scanf("%d", &num);

	if (num>=1)
	{
		ans=0;

		for (i=num;i>=1;i--)
		{
			ans=ans+i;
		}
		printf("Sum of first %d numbers is %d",num,ans);
	}
	else
	{
		printf("Invalid Input !!!");
	}

	return 0;
}