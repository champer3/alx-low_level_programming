#include "stdio.h"

int main(void)
{
  int i;
  char p[] = "holberton";

  for (i=0; i<9; i++)
   _putchar("%c", p[i]);
  _putchar('\n');
  return(0);

}
