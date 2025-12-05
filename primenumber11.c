#include<stdio.h>
#include<stdlib.h>

int main()
{
	int num,num1,i;

	printf("Enter up to which number do you want to find prime numbers:  ");
	scanf("%d", &num1);

	for (num=1;num<=num1;num++)
	{
	  for (i=2;i<num;i++)
	   {
			if (num%i==0)
		{
			break;
		}
	}
		if (i==num)
		{
			printf("%d ",num);
		}
	}
	return 0;
}