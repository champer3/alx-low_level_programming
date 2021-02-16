#include <stdio.h>

int main(void)
{
int n;  
int *p;

n = 98;
p = &n;

printf("Address of the variable 'n' is: %p\n", &n);
printf("value of the pointer '*p' is: %p\n", p);
return(0);
}
