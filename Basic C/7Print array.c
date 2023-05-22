#include<stdio.h>
void main()
{
   int a[10],i,n;
   printf("How many numbers"); 
   scanf("%d",&n);
   printf("Enter %d numbers",n);
   for(i=0;i<n;i++)
   {
    scanf("%d",&a[i]);
    printf("%d",a[i]);
    printf(" ");
   }
}
