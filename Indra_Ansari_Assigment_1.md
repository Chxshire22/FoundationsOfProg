# Assignment 1 ICT159

## Lab 1 Activity 5

### Algorithm

- Pseudocode

1. Prompt user to input a number.
2. Check if number is more than or less than 0.
3. Take the inputted number, and if it is less than 0, add 9. Else, subtract 9 from inputted number
4. Take note the result of step 2.
5. If number input is more than 0, repeat step 3 and 4 until result noted at step 4 is less than 9. If number input is less than 0, repeat step 3 and 4 until result noted at step 4 is more than -9. Proceed to next step.
6. If that result is not equals to 0, tell user that it is not multiple of 9.
7. If that result is equals to 0, tell user that it is multiple of 9.

### Test Cases

| Test Case No. | Number Selected | Expected Result          | Produced Result          |
| ------------- | --------------- | ------------------------ | ------------------------ |
| 1             | 9               | Is a multiplier of 9     | Is a multiplier of 9     |
| 2             | 12              | Is not a multiplier of 9 | Is not a multiplier of 9 |
| 3             | 5               | Is not a multiplier of 9 | Is not a multiplier of 9 |
| 4             | -8              | Is not a multiplier of 9 | Is not a multiplier of 9 |
| 5             | 45              | Is a multiple of 9       | Is a multiple of 9       |

## Lab 2 Exercise 4

```
1) 1+3/2.0: 1+(3/2.0)
2) 2-3*4: 2-(3*4)
3) 2/3.0*4: (2/3.0)*4
4) 2*3/4.0: (2*3)/4.0
5) 2.0/3.0/4.0: (2.0/3.0)/4.0
6) 4.0/3.0*2.0/5.0: ((4.0/3.0)*2.0)/5.0
7) 6.0*3.0/4.0*5.0: ((6.0*3.0)/4.0)*5.0
8) 4*3^2: 4*(3^2)
9) 2-2^3*2: 2-((2^3)*2)
10) 2.0/3.0*4^2: (2.0/3.0)*(4^2)
11) 1+2.0/3.0*4+5: (1+((2.0/3.0)*4))+5
12) 5/2.0*2+4%3+9-3: ((((5/2.0)*2)+(4%3))+9)-3

```

## Lab 3 Exercise 4 Operator Precedence (USING CODE TO CHECK)

[gdb link](https://onlinegdb.com/jV2Z7aXBN)

```c
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
  expressionWithParenthesis = ((6.0 * 3.0) / 4.0) * 5.0;

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

```
