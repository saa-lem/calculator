/*create  a calculator program that will accept two numbers and compute the sum difference, product, quotient and modulus of the 2 numbers

 INPUTS:
     -num1, num2

OUTPUTS:
    -sum
    -difference
    -pro
    -quo
    -mod


*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // variable declaration
  float quot;
  int num1,num2,sum,diff,pro,mod;

  //Assignment
  num1 = 200;
  num2 = 56;

  //Computations
  sum = num1 + num2;
  diff = num1 - num2;
  pro = num1 * num2;
  quot = (float)num1 / num2;
  mod = num1 % num2;

  //Output
  //sum: result
  // 3 +5 = 8
  printf("%d + %d = %d\n",num1,num2,sum);
  printf("%d - %d = %d\n",num1,num2,diff);
  printf("%d / %d = %f\n",num1,num2,quot);
  printf("%d * %d = %d\n",num1,num2,pro);
  printf("%d mod %d = %d\n",num1,num2,mod);

    return 0;
}
