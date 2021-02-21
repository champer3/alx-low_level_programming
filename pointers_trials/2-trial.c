#include <stdio.h>

int _strlen(char *s)
{
  int i;
  for (i = 0, *s != '\0'; i++; s++)
    {
      printf("%d\n", i);
    }return(0);
}
