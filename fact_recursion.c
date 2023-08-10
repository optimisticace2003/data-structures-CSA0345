#include <stdio.h>
int fact(int);
int main()
{
	int n,i,factorial;
	printf("enter n value:\n");
	scanf("%d",&n);
	factorial=fact(n);
	printf("fact=%d",factorial);
	return 0;
}
int fact(int m)
{
	if(m==0)
	return 1;
	return m*fact(m-1);
	
}
