#include<stdio.h>

void main()
{
    int n,temp,rev=0,rem;
    printf("Enter a number\n");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        rem=n%10;
        rev=(rev*10)+rem;
        n=n/10;
    }
    if(temp==rev)
    {
        printf("%d is a palindrome number",temp);
    }
    else
    {
        printf("%d is not a palindrome",temp);
    }
}
