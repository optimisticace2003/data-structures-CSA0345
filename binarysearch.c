#include <stdio.h>
int main()
{
	int a[10],i,low,high,search,n,mid,found=0;
	printf("enter size:\n");
	scanf("%d",&n);
	printf("enter elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter search element:\n");
	scanf("%d",&search);
	low=0;
	high=n-1;
	mid=(high+low)/2;
	while(low<=high)
	{
		if(search<a[mid])
		{
			low=mid+1;
		}
		else if(search==a[mid])
		{
			printf("found in %d position\n",mid+1);
			found=1;
			break;
		}
		else if(search>a[mid])
		{
			high=mid-1;
			mid=high+low/2;
		}
	}
	if(found==0)
	{
		printf("not found");
	}
	return 0;
}
