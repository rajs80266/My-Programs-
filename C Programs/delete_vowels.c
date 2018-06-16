#include<stdio.h>

int main()
{
    int i,j;
    char S[100];

    printf("Enter a word:");
    scanf("%s",S);

    for(i=0,j=0;S[j]!='\0';j++)
        if(S[j]!='a' && S[j]!='e' && S[j]!='i' && S[j]!='o' && S[j]!='u' && S[j]!='A' && S[j]!='E' && S[j]!='I' && S[j]!='O' && S[j]!='U')
            S[i++]=S[j];
    S[i]='\0';

    printf("word without vowels is: %s",S);

    return 0;
}
