#include <stdio.h>
/**
 * main-prints all letters q and e
 *
 * Return:zero
 */
int main(void)
{
char c = 'a';
while (c <= 'z')
{
if (c != 'e' && c != 'q')
{
putchar (c);
c++;
}
else
{
c++;
}
}
putchar ('\n');
return (0);
}
