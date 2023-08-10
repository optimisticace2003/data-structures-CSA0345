#include <stdio.h>
int main()
 {
  int i, n,c;
  int a= 0,b = 1;
  printf("Enter the number of terms: ");
  scanf("%d", &n);
  printf("Fibonacci Series: %d,",a);
  for (i =1; i <= n; ++i)
   {
    printf("%d,",c);
    c=a+b;
    a=b;
    b=c;
  }

  return 0;
}
