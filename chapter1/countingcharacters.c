#include <stdio.h>
/* count characters in input */
main()
{
  int nc;
  printf("Executing counting characters...\n");
  //for (nc = 0; getchar() != EOF; ++nc)
  //      ; //body is empty - called a null statement
  //printf("Count: %.0f\n", nc);

  nc = 0;
  while ((c = getchar()) != EOF)
   if(c != '\n')
      ++nc;
  printf("%d\n", nc);

  printf("Terminated program.\n");
}

/*
printf uses %f for both float and double; %.0f suppresses the
printing of the decimal point and the fractions part, wich is zero.
*/
