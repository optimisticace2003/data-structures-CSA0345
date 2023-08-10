#include <stdio.h>
int main()
{
	int a[10],i,search,found=0,n;
	printf("enter size:\n");
	scanf("%d",&n);
	printf("enter elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter search:\n");
	scanf("%d",&search);
	for(i=0;i<n;i++)
	{
		if(search==a[i])
		{
			found=1;
			break;
		}
		else
		{
			found=0;
		}
	
	}
	if(found==1)
	{
		printf("%d found in %d position",search,i+1);
	}
	else
	{
		printf("%d not found",search);
	}
	return 0;
}
