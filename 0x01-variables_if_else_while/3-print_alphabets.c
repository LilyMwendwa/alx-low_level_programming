#include <stdio.h>
/**
 * main- prints alphabetic letters in lowercase and uppercase
 *
 *Return:zero
 */
int main(void)
{
char l;
char U;

for (l = 'a'; l <= 'z'; l++)
{
putchar(l);
}
for (U = 'A'; U <= 'Z'; U++)
{
putchar(U);
}
putchar('\n');
return (0);
}
