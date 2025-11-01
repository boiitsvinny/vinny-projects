#include <stdio.h>

int main()
{
  int a, b;
  printf("number A: ");
  scanf("%d", &a);

  printf("number B: ");
  scanf("%d", &b);

  if (a > b)
  {
    printf(" a is greater than b");
  }
  else
  {
    printf("b is greater than a");
  }

  return 0;
}