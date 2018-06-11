#include<stdio.h>

int main()
{
    int m,yr,leap;

    printf("Enter a month no. &year\n");
    scanf("%d %d",&m,&yr);

    leap=((yr%4==0)&&(yr%100!=0)||(yr%100!=0));

    switch(m)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("Number of days  is 31");
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            printf("Number of days is 30");
            break;
        case 2:
            if(leap==1)
            {
                printf("number of days is 29");
            }
            else
            {
                printf("Number of days is 28");
            }
            break;
        default:
            printf("error!");
            break;
    }
}

