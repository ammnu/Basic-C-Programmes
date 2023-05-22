#include<stdio.h>
void main()
{
    int i,a;
    printf("Enter a number upto which even numbers has to print");
    scanf("%d",&a);
    for(i=2;i<=a;i=i+2)
    {
        printf("%d",i);
        printf(" ");
    }
}