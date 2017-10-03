#include <stdio.h>

/* Write a program to copy its input to its output, replacing each
string of one or more blancks by a single blank.
*/
int main()
{
  int c, lastc;

  while((c = getchar()) != EOF)
  {
    if (c == ' ')
    {
      if(lastc != ' ')
        putchar(c);
    }
    else
    {
        putchar(c);
    }

    lastc = c;
  }
  return 0;
}
