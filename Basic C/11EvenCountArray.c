#include<stdio.h>
void main()
{
   int A[10],i,count=0,n;
   printf("Enter how many numbers");
   scanf("%d",&n);
   printf("Enter the numbers");
   for(i=0;i<n;i++)
   {
      scanf("%d",&A[i]);
   }
   for(i=0;i<n;i++)
   {
    if(A[i]%2==0)
    {
        count=count+1;
    }
   }
   printf("The number of times an even number entered is %d \n",count);
   printf("The number of times an odd number entered is %d",(n-count));
}