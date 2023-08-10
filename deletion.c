#include<stdio.h>
int main()
{int a[10],i,n,pos;
printf("enter size:\n");
scanf("%d",&n);
printf("enter elemets:\t");
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}
printf("enter pos:\n");
scanf("%d",&pos);
for(i=pos-1;i<n;i++)
{
	a[i]=a[i+1];
}
for(i=0;i<n-1;i++)
{
	printf("%d\t",a[i]);
}
return 0;
}
