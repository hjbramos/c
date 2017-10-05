#include <stdio.h>

int main()
{
  int c, word;

  while((c = getchar()) != EOF)
  {
    if (c == ' ')
        putchar('\n');
    else if (c == '\b')
        putchar('\n');
    else if (c == '\t')
        putchar('\n');
    else putchar(c);
  }

  return 0;
}
