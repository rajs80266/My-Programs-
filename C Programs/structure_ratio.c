#include<stdio.h>

struct fraction
{
	int num,den;
};

void display(struct fraction x)
{
	printf("%d/%d",x.num,x.den);
}

struct fraction mult(struct fraction a,struct fraction b)
{
	struct fraction z;

	z.num=a.num*b.num;
	z.den=a.den*b.den;

	return z;
}

struct fraction add(struct fraction i,struct fraction j)
{
	struct fraction m;

	m.num=(i.num*j.den)+(j.num*i.den);
	m.den=i.den*j.den;

	return m;
}

void main()
{
	struct fraction f1,f2;

	printf("Enter the numerator for the first fraction : ");
	scanf("%d",&f1.num);

	printf("Enter the denominator for the first fraction : ");
	scanf("%d",&f1.den);

	printf("Enter the numerator for the second fraction : ");
	scanf("%d",&f2.num);

	printf("Enter the denominator for the second fraction : ");
	scanf("%d",&f2.den);

	printf("First fraction is : ");
	display(f1);

	printf("\nSecond fraction is : ");
	display(f2);

	printf("\nAddition of the fractions is : ");
	display(add(f1,f2));

	printf("\nMultiplication of the fractions is : ");
	display(mult(f1,f2));
}
