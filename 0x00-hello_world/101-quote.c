#include <stdio.h>
#include <unstd.h>
/**
 * main-a program that prints message exactly as it is
 *
 * Return:0(Success)
 *
 */
int main(void)
{
write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",
sizeof("and that piece of art is useful\" - Dora Korpar, 2015-10-19"));
return (1);
}
