#include <stdio.h>

void modif_my_char_var(char *cc, char ccc)
{
  printf("Value of cc: %p\n", cc);
  printf("Address of cc: %p\n", &cc);
  printf("value of ccc: %c\n", ccc);
  printf("Adress of ccc: %p\n", &ccc);
  *cc = 'o';
  ccc = 'l';
}

int main(void)
{
  char c;
  char *p;

  c = 'H';
  p = &c;

  printf("value of c: %c\n", c);
  printf("Address of c: %p\n", &c);
  printf("value of p: %p\n", p);
  printf("Address of p: %p\n", &p);
  modif_my_char_var(p, c);
  printf("value of c after the call: %c\n", c);
  return(0);
}
