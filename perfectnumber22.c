#include<stdio.h>

int main()
{
	int num,num1,i,ans;

	printf("Enter the number till you want to find Perfect Number: ");
	scanf("%d", &num1);

	num=1;
	while(num<=num1)
    {
	  ans=0;
	  i=1;

	  while(i<num)
	  {
		 if(num%i==0)
	    
	     {
		        ans=ans+i;
	      }i++;
	  }
	  if(num==ans)
      {
		  printf("%d is Perfect Number. \n", num);
	  }num++;
    }

	return 0;
	
}