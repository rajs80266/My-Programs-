#include<stdio.h>

int main()
{
    long long n,temp,sum=0;

    printf("Enter a number:");
    scanf("%lld",&n);
    temp=n;

    while(n>0)
    {
        sum=(sum*10)+n%10;
        n=n/10;
    }
    printf("The number after reversing is: %lld\n",sum);

    if(temp==sum)
    {
        printf("The number is a palindrome");
    }
    else
    {
        printf("The number is not a palindrome");
    }

    return 0;
}
