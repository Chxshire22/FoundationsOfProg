#include <stdio.h>

int main() {

  // declare variables, user input and remainders for after subtracting
  int input = 0;     // store user input
  int remainder = 0; // store remainders after deducting factor
  int factor = 9;    // factor that we are SUBTRACTING with
  // instruct user to input a number
  printf("Please input a number: \n");
  // read number input by user, store into input.
  scanf("%d", &input);

  // minus until the number inputted is lower than 9
  for (int i = input; i >= factor; i = i - factor) {
    remainder = i;
  };
  // if remainder is equal to the factor, tell user that it is a multiple, if
  // not, tell user that it is not.
  if (remainder == factor) {
    printf("The number %d is a multiple of %d\n", input,
           factor); // output when it is a multiple of factor
  } else {
    printf("The number %d is not a multiple of %d\n", input,
           factor); // output when not multiple of factor
  };
  return 0;
}
