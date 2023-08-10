#include <stdio.h>
int main()
{
	int a[10],odd=0,even=0,i,n;
	printf("enter no.of elements in an array:\n ");
	scanf("%d",&n);
	printf("enter elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]%2==0)
		{
			even++;
		}
		else
		{
			odd++;
		}
	}
	printf("odd count=%d\n",odd);
	printf("even count=%d\n",even);
	
}
