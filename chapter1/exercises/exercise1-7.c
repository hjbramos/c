#include <stdio.h>

/*Write a program to print the value of EOF. EOF do not have ASCII value (-1)*/
int main()
{
  int c;

  while(c = getchar())
  {
    if(c == EOF)
    {
      printf("%d\n", c);
      return 0;
    }
  }
  return 0;
}
