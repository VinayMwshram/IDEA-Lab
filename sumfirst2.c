#include<stdio.h>

int main()
{
	int num,ans,i;

	printf("Find Sum of First Numbers: ");
	scanf("%d", &num);

	if (num>=1)
	{
		ans=1;
		i=num;
		while(i>=2)
		{
			ans=ans+i;
			i--;
		}
		printf("Sum of First %d numbers is %d", num,ans);
	}
	else
	{
		printf("Invalid Input!!!");
	}

	return 0;
}