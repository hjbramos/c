#include <stdio.h>

/* verify that the expression getchar() != EOF is 0 or 1 */
int main()
{
  int c;

  while(c = getchar())
  {
    if(c == EOF)
    {
      printf("%d\n", 1);
      return 0;
    }
    else
    {
      printf("%d\n", 0);
    }
  }
  return 0;
}
