/* Standard Input and Output Library */
#include <stdio.h>

/*Math Library*/
#include <math.h>

/* Format specifier for double is %ld */
/* To have your result to 1 decimal place especially for double do %.1lf */

int main(void){

  /* Variables */
  double x, y, result;
  x = 10.0;
  y = 30.0;

  /*Statments*/
  
  /* Additon */
  result = 10 + 30;
  printf("The result of %.1lf + %.1lf = %.1lf \n \n", x, y, result);

  /* Subtraction */
  result = x - y;
  printf("The result of %.1lf - %.1lf = %.1lf which is a negative number \n \n", x, y, result);
  result = y - x;
  printf("The result of %.1lf - %.1lf = %.1lf which is a positive number \n \n", y, x, result);
  
  /* Multiplication */
  result = x * y;
  printf("The result of %.1lf * %.1lf = %.1lf \n \n", x, y, result);

  /* Division */
  result = x / y;
  printf("The division of %.1lf / %.1lf = %.1lf \n \n", x, y, result);

  /* Modulo
  * Becuase we cannot get the modulo of a double, we need to use the fmod() func
  * Ensure to import the library <math.h> when using that function
  */
  result = fmod(y,x);
  printf("The modulo of %.1lf and %.1lf = %.1lf \n \n", y, x, result);

  result = fmod(x,y);
  printf("The modulo of %.1lf and %.1lf = %.1lf \n \n", x, y, result);

  /* Increment
  * The result for this particular expression first add the values
  * Then increments them
  */
  result = x + y;
  printf("The increment of %.1lf + %.1lf = %.1lf \n \n", x, y, ++result);
  
  /* Decrement 
  * The result of this particular expression first adds the values
  * Then it decrements them
  */
  result = x + y;
  printf("The decrement of %.1lf + %.1lf = %.1lf \n \n", x, y, --result);

  return 0;
}