#include <stdio.h>

int main(void)
{
  int *p;
printf("size of the variable '*p' is: %lu\n", sizeof(*p));
printf("Address of the pointer '*p' is: %p\n", &p);
}
