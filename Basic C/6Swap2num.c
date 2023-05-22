#include<stdio.h>
void main()
{
    int i,j,temp;
    printf("Enter two numbers");
    scanf("%d%d",&i,&j);
    temp=i;
    i=j;
    j=temp;
    printf("The numbers are swapped to \n ");
    printf("%d and %d",i,j);

}  