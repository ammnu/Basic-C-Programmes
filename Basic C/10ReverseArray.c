#include<stdio.h>
void main()
{
    int A[10],i,n,temp;
    printf("Enter the number of elements");
    scanf("%d",&n);
    printf("Enter %d numbers",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);   
    }
    for(i=0;i<(n/2);i++) //logic
    {
        temp=A[i]; 
        A[i]=A[n-i-1];
        A[n-i-1]=temp;
    }
    printf("The reversed array is..");
    for(i=0;i<n;i++)
    {  
        printf("   %d",A[i]);
    }
} 