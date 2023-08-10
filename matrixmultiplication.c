#include <stdio.h>
int main()
{
	int a[10][10],b[10][10],c[10][10],i,j,k,r1,c1,r2,c2;
	printf("enter r1,c1:\n");
	scanf("%d,%d",&r1,&c1);
	printf("enter r2,c2:\n");
	scanf("%d,%d",&r2,&c2);
	if(c1==r2)
	{
		//creating a matrix a
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
			{
				printf("enter a[%d][%d]:\n",i,j);
				scanf("%d",&a[i][j]);
			}
		}
		for(i=0;i<r2;i++)
		{
			for(j=0;j<c2;j++)
			{
				printf("enter b[%d][%d]:\n",i,j);
				scanf("%d",&b[i][j]);
			}
		}
	//printing matrix
	printf("matrix a:\n");
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
			{
			printf("%d\t",a[i][j]);
			}
			printf("\n");
		}
	printf("matrix b:\n");	
		for(i=0;i<r2;i++)
		{
			for(j=0;j<c2;j++)
			{
				printf("%d\t",b[i][j]);
			}
			printf("\n");
		}
		//multiplication
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c2;j++)
			{
				c[i][j]=0;
				for(k=0;k<c1;k++)
				{
					c[i][j]=c[i][j]+a[i][k]*b[k][j];
				}
			}
		}	
		printf("matrix c:\n");
		//printing c matrix
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c2;j++)
			{printf("%d\t",c[i][j]);}
			printf("\n");}
		
	}
	else {
		printf("not possible" );
	}
	return 0;
}
