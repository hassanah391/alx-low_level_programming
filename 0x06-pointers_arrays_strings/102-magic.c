#include <stdio.h>

int main(void)
{
  int n;
  int a[5];
  int *p;

  a[2] = 1024;
  p = &n;

  /* One line of code to achieve a[2] = 98 */
  *(p + 5) = 98;  /* This line sets a[2] = 98 */

  /* ...so that this prints 98\n */
  printf("a[2] = %d\n", a[2]);
  return (0);
}