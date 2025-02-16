#include <stdio.h>

int main() {

  // Let's defina two variables. These will hold teh result of the expression
  // before and after adding the parenthesis

  float expressionWithoutParenthesis = 0;
  float expressionWithParenthesis = 0;

  // 1. Expression 1

  expressionWithoutParenthesis = 1 + 3 / 2.0;
  expressionWithParenthesis = 1 + (3 / 2.0);

  printf("\n Expression 1 - \n\tWithout Parenthesis: \t %4f \n\tWith "
         "Parentesis: \t %4f \n",
         expressionWithoutParenthesis, expressionWithParenthesis);

  // 2. Expression 2

  expressionWithoutParenthesis = 2 - 3 * 4;
  expressionWithParenthesis = 2 - (3 * 4);

  printf("\n Expression 2 - \n\tWithout Parenthesis: \t %4f \n\tWith "
         "Parentesis: \t %4f \n",
         expressionWithoutParenthesis, expressionWithParenthesis);

  // 3. Expression 3

  expressionWithoutParenthesis = 2 / 3.0 * 4;
  expressionWithParenthesis = (2 / 3.0) * 4;

  printf("\n Expression 3 - \n\tWithout Parenthesis: \t %4f \n\tWith "
         "Parentesis: \t %4f \n",
         expressionWithoutParenthesis, expressionWithParenthesis);

  // 4. Expression 4

  expressionWithoutParenthesis = 2 * 3 / 4.0;
  expressionWithParenthesis = (2 * 3) / 4.0;

  printf("\n Expression 4 - \n\tWithout Parenthesis: \t %4f \n\tWith "
         "Parentesis: \t %4f \n",
         expressionWithoutParenthesis, expressionWithParenthesis);

  // 5. Expression 5

  expressionWithoutParenthesis = 2.0 / 3.0 / 4.0;
  expressionWithParenthesis = (2.0 / 3.0) / 4.0;

  printf("\n Expression 5 - \n\tWithout Parenthesis: \t %4f \n\tWith "
         "Parentesis: \t %4f \n",
         expressionWithoutParenthesis, expressionWithParenthesis);

  // 6. Expression 6

  expressionWithoutParenthesis = 4.0 / 3.0 * 2.0 / 5.0;
  expressionWithParenthesis = ((4.0 / 3.0) * 2.0) / 5.0;

  printf("\n Expression 6 - \n\tWithout Parenthesis: \t %4f \n\tWith "
         "Parentesis: \t %4f \n",
         expressionWithoutParenthesis, expressionWithParenthesis);

  // 7. Expression 7

  expressionWithoutParenthesis = 6.0 * 3.0 / 4.0 * 5.0;
  expressionWithParenthesis = ((6.0 * 3.0) * 4.0) / 5.0;

  printf("\n Expression 7 - \n\tWithout Parenthesis: \t %4f \n\tWith "
         "Parentesis: \t %4f \n",
         expressionWithoutParenthesis, expressionWithParenthesis);

  // 8. Expression 8

  expressionWithoutParenthesis = 4 * (3 * 3);
  expressionWithParenthesis = 4 * (3 * 3);

  printf("\n Expression 8 - \n\tWithout Parenthesis: \t %4f \n\tWith "
         "Parentesis: \t %4f \n",
         expressionWithoutParenthesis, expressionWithParenthesis);

  // 9. Expression 9

  expressionWithoutParenthesis = 2 - (2 * 2 * 2) * 2;
  expressionWithParenthesis = 2 - ((2 * 2 * 2) * 2);

  printf("\n Expression 9 - \n\tWithout Parenthesis: \t %4f \n\tWith "
         "Parentesis: \t %4f \n",
         expressionWithoutParenthesis, expressionWithParenthesis);

  // 10. Expression 10

  expressionWithoutParenthesis = 2.0 / 3.0 * (4 * 4);
  expressionWithParenthesis = (2.0 / 3.0) * (4 * 4);

  printf("\n Expression 10 - \n\tWithout Parenthesis: \t %4f \n\tWith "
         "Parentesis: \t %4f \n",
         expressionWithoutParenthesis, expressionWithParenthesis);

  // 11. Expression 11

  expressionWithoutParenthesis = 1 + 2.0 / 3.0 * 4 + 5;
  expressionWithParenthesis = (1 + ((2.0 / 3.0) * 4)) + 5;

  printf("\n Expression 11 - \n\tWithout Parenthesis: \t %4f \n\tWith "
         "Parentesis: \t %4f \n",
         expressionWithoutParenthesis, expressionWithParenthesis);

  // 12. Expression 12

  expressionWithoutParenthesis = 5 / 2.0 * 2 + 4 % 3 + 9 - 3;
  expressionWithParenthesis = ((((5 / 2.0) * 2) + (4 % 3)) + 9) - 3;

  printf("\n Expression 12 - \n\tWithout Parenthesis: \t %4f \n\tWith "
         "Parentesis: \t %4f \n",
         expressionWithoutParenthesis, expressionWithParenthesis);

  return 0;
}
