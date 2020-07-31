#include <stdio.h>
main()
{
  int a,b; 
  printf("enter first number");
  scanf("%d",&a);
  printf("enter second number");
  scanf("%d",&b);
  a=a+b;
  b=a-b;
  a=a-b;
  printf("value after swapping");
  printf("value of A %d,a");
  printf("value of B %d,b");
  return 0;
  }