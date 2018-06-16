#include<stdio.h>
#include<conio.h>

void main()
{
        int r,c,i,j,sum=0;
        int matrix[100][100];

    	printf("Give number of rows and coloum:\n");
    	scanf("%d %d",&r,&c);

    	printf("Give numbers:\n");
    	for(i=0;i<r;i++)
    	{
        		for(j=0;j<c;j++)
        		{
            			scanf("%d",&matrix[i][j]);
        		}
    	}

    	printf("The matrix is:\n");
    	for(i=0;i<r;i++)
    	{
        		for(j=0;j<c;j++)
        		{
            			printf("%d ",matrix[i][j]);
        		}
                printf("\n");
    	}
    	printf("\n");

        for(i=0;i<r;i++)
    	{
        		for(j=0;j<c;j++)
        		{
            			if(i!=j)
            			{
                			sum=sum+matrix[i][j];
            			}
        		}
    	}
    	printf("The sum of non-diagonal elements of matrix is:%d",sum);
}


