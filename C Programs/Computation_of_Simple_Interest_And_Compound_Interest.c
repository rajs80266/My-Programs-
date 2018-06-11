#include<stdio.h>
#include<math.h>

int main()
{
    int T;
    float  p,si,ci,r,temp;

    printf("Please enter  principal amount ,rate and period\n");
    scanf("%f %f %d",&p,&r,&T);

    si = p*T*r/100;
    temp = 1+ (r/100);
    ci = p*pow(temp,T)-p;

    printf("The Simple interest is %f and\nThe Compound interest is %f\n",si,ci);

    return 0;
}
