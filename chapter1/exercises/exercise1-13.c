#include <stdio.h>

/* Write a program to print a histogram of the lengths of words in its input.
It is easy to draw the histogram with the bars horizontal; a vertical orientation
is more challenging.
*/

main()
{
    int c, i, nchar;
    int histogram[5];

    nchar = 0;
    for (i = 0; i < 5; ++i)
      histogram[i] = 0;

    while ((c=getchar()) != EOF)
    {
      if(c != '\n' || c != '\t' || c != ' ')
      {
         ++nchar;
      }
      else
      {
        if (nchar > 5)
          ++histogram[5];
        else
          ++histogram[nchar];
        nchar = 0;
      }
    }

    printf("Histogram:\n");
    for (i = 0; i < 5; ++i)
      printf("%d word's length: %d\n", i, histogram[i]);

    //int alphabetic[]
    //a b c d e f g h i j k l m n o p q r s t u v w x y z
}
