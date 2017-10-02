#include <stdio.h>

/* print Fahrenheit-Celsius table
   for fahr = 0, 20 ..., 300 */

main()
{
  //int fahr, celsius;
  float fahr, celsius;
  float lower, upper, step;

  lower = 0;  // lower limit of temperature scale
  upper = 300; // upper limit
  step = 20; // setp size

  fahr = lower;
  while (fahr <= upper) {
    //celsius = 5 * (fahr - 32) / 9;
    celsius = (5.0/9.0) * (fahr - 32.0);
     /*
      print the first number of each line in a field three digits wide, and
      the second in a field six digits wide.
     */
    //printf("%3d\t%6d\n", fahr, celsius);
    printf("%3.0f  %6.1f\n", fahr, celsius);
    fahr = fahr + step;
  }
}

/*
celsius = 5 * (fahr - 32) / 9;
The reason for multiplying by 5 and dividing by 9 instead of just
multiplying by 5/9 is that in C, as in many other languages, integer
division truncates: any fractional part is discarded. Since 5 and9 are
integers. 5/9 would be truncated to zero and so all the celsius temperatures
would be reported as zero.
*/

/*
printf("%3.0f  %6.1f\n", fahr, celsius);
The printf conversion specification %3.0f says that a floating-point number (here fahr)
is to be printed at least three characters wide, with no decimal point and no fraction digits.
%6.1f describes another number (celsius) that is to be printed at least six characters wide,
with 1 digit after the decimal point.
*/

/*
A variation on the temperature converter.

int fahr;

for (fahr = 0; fahr <= 300; fahr = fahr + 20)
  printf("%3d  %6.1f\n", fahr, (5.0/9.0)*(fahr-32));

*/
