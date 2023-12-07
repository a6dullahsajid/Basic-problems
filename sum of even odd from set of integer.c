#include<stdio.h>

void main()
{
    int a[50],n,esum=0,osum=0,i;
    printf("Enter the number of integers you want to enter(max=50)");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if((a[i]%2)==0)
        {
            esum+=a[i];
        }
        else
        {
            osum+=a[i];
        }
    }
    printf("\nSum of even numbers=%d",esum);
    printf("\nSum of odd numbers=%d",osum);
}