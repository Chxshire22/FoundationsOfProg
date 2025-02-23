#include <stdio.h>

int main() {

  // declare variables
  long long container1 = 0; // set number of the first iteration
  long long container2 = 1; // set number of the second iteration
  long long container3 = 0; // stores the additions
  int iterations = 0;       // stores the requested iterations
  int counter = 0;          // counter

  // prompt user to input number of iterations
  while (iterations <= 0) {
    printf("\n-----FIBONACCI SEQUENCE-----\n\n");
    printf(
        "\n How many iterations would you like?\n MUST BE HIGHER THAN 0: \t");
    scanf("%d", &iterations);
  }

  printf("\n\n Iteration #1 : %lld", container1);
  printf("\n Iteration #2 : %lld", container2);

  // counter set as 3, as the first 2 Iterations are already set and printed.
  for (counter = 3; counter <= iterations; counter++) {
    container3 = container1 + container2;
    printf("\n Iteration #%d : %lld", counter, container3);
    container1 = container2; // copy container 2's value to container1
    container2 = container3; // copy container3's value to container2
  }

  return 0;
}
