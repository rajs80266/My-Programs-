#include<stdio.h>
int main()
{
    int i,n,temp,a[1000];

    printf("Give the number of elements:");
    scanf("%d",&n);

    printf("Enter elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("The value before rotating are\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");

    temp=a[0];
    for(i=1;i<n;i++)
    {
        a[i-1]=a[i];
    }
    a[n-1]=temp;

    printf("The value after rotating are\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
