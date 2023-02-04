#include <iostream>

int main() 
{
  int a = 10;
  int * pa = &a;
  printf("%p\n",pa);
  *pa = 20;
  printf("%d",a);
  return 0;
}