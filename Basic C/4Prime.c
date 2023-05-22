#include<stdio.h>
#include<math.h>
void main()
{
    int num,i,count=0;
    printf("Enter the number to be checked if prime");
    scanf("%d",&num);
    for(i=2;i<= sqrt(num);i++)
    {
      if(num%i==0)
      { 
        count++;
      }
    }
    if(count>0)
    {
        printf("Number is not prime");
    }
    else
    {
        printf("Number is  prime");
    }
}