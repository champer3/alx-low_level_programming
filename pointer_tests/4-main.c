#include <stdio.h>

int main(void)
{
int n;  
int *p;

n = 98;
p = &n;

printf("value of 'n' is: %d\n", n);
printf("address of 'n' is: %p\n", &n);
printf("value of the pointer '*p' is: %p\n", p);

*p = 402;
printf("value of 'n' is: %d\n", n);
return(0);
}
