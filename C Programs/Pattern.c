#include<stdio.h>
#include<conio.h>

int main()
{
    int n,r,c,s;

    printf("enter no of rows");
    scanf("%d",&n);

    for(r=0;r<=n;r++)
    {
        for(s=1;s<=r;s++)
        {
            printf(" ");
        }

        for(c=n-r;c>=1;c--)
        {
            printf("%d",c);
        }

        printf("\n");
    }
}

