#include<stdio.h>
#include<conio.h>
int fact(int);

int main()
{
    int n ,r ,i ,ans,a,b,c;

    printf("enter n and r\n");
    scanf("%d %d",&n,&r);

    a = fact(n);
    b = fact(n-r);
    c = fact(r);

    printf("nCr is %d\n",a/(b*c));
}

//Recursive function
int fact(int x)
{
    if(x==1 || x==0)
        return 1;
    else
        return x*fact(x-1);
}
