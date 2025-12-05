#include<stdio.h>

int main()
{
	int num,rev,rem,pnum;

	printf("Enter the Number: ");
	scanf("%d", &num);

	pnum=num;

	rev=0;

	while(num>0)
	{
		rem = num%10 ;

		rev = (rev*10) + rem;

		num = num / 10 ;
	}


	printf("Reverse of %d is %d . ",pnum,rev);

	return 0;
}