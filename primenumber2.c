#include<stdio.h>

int main()
{
	int num,i,ans;

	printf("Enter the Number: ");
	scanf("%d",&num);
    
	i=2;
	while(i<num)
	{
		if(num%i==0)
		{
			break;
		}i++;
	}
	if(num==i)
	{
		printf("%d is Prime Number. ",num);
	}
	else
	{
		printf("%d is Not Prime Number.",num);
	}i++

	return 0;
}