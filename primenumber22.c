#include<stdio.h>
#include<stdlib.h>

int main()
{
	int num,i,num1;

   printf("Enter the number till you want to find Prime Number:  ");
   scanf("%d", &num1);


   num=1;

   while(num<=num1)
   {  
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
 	  	   printf("%d is Prime Number. \n",num);
 	   }num++;
     
     } 

     printf("These are the all Prime Numbers till %d. \n", num1);
     

 	  return 0;

 }