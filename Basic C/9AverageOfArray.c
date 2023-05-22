#include<stdio.h>

void main()
{
    int A[10],i,n,sum=0;
    float Avg;
    printf("Enter the number of elements");
    scanf("%d",&n);
    printf("Enter %d numbers",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
        sum=sum+A[i];

    }
    Avg=(sum/n);
    printf("The average is %f",Avg);
}