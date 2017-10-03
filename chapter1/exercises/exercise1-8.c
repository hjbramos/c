#include <stdio.h>

/* Write a program to count blanks, tabs, and newlines. */
int main()
{
  int c, blanks, tabs, newlines;

  blanks = tabs = newlines = 0;
  while(c = getchar())
  {
    if (c == ' ')
        ++blanks;
    if (c == '\t')
        ++tabs;
    if (c == '\n')
        ++newlines;
    printf("blanks=%d, tabs=%d, newlines=%d\n", blanks, tabs, newlines);
  }

  return 0;
}
