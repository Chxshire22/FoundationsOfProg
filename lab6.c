#include <stdio.h>

// function prototypes
void max(int input1, int input2, int input3, int *max);       // find max
void min(int input1, int input2, int input3, int *min);       // find min
void avg(int input1, int input2, int input3, float *average); // find avg
void diff(int maxNum, float average,
          int minNum);     // find diff between max and min, and max and avg
void absolute(int minNum); // find absolute value

int main() {

  // declare variables
  int input1 = 0;    // store first input
  int input2 = 0;    // store second input
  int input3 = 0;    // store third input
  int maxNum = 0;    // store max num
  int minNum = 0;    // store min num
  float average = 0; // store average value

  // prompt user to input numbers
  printf("\n Please input the first number: ");
  scanf("%d", &input1);
  printf("\n\n Please input the second number: ");
  scanf("%d", &input2);
  printf("\n\n Please input the third number: ");
  scanf("%d", &input3);

  max(input1, input2, input3, &maxNum);
  min(input1, input2, input3, &minNum);
  avg(input1, input2, input3, &average);
  diff(maxNum, average, minNum);
  absolute(minNum);

  return 0;
}
// function declaration to find max val
void max(int input1, int input2, int input3, int *maxNum) {

  if (input1 >= input2) {
    *maxNum = input1;
  } else {
    *maxNum = input2;
  }
  if (input3 > input2) {
    *maxNum = input3;
  }
  printf("\n The maximum input value is: %4d", *maxNum);
}
// function definiton to find min val
void min(int input1, int input2, int input3, int *minNum) {
  if (input1 <= input2) {
    *minNum = input1;
  } else {
    *minNum = input2;
  }
  if (input3 < input2) {
    *minNum = input3;
  }
  printf("\n The minimum input value is: %4d", *minNum);
}

// funciton definition to find avg val
void avg(int input1, int input2, int input3, float *average) {
  *average = (input1 + input2 + input3) /
             3.0; // the number 3 is a set number as the
                  // question only requested 3 NOT dynamic.
  printf("\n The average is: %4.2f", *average);
}
// function definition to find differences
void diff(int maxNum, float average, int minNum) {
  printf("\n The difference between max and min: %4d", maxNum - minNum);
  printf("\n The difference between max and average: %4.2f", maxNum - average);
}

// function definition to find absolute value
void absolute(int minNum) {
  int abVal = 0; // store absolute value. doesnt need to be in main program, not
                 // needed in any other functions.
  if (minNum >= 0) {
    abVal = minNum;
  } else {
    abVal = minNum * -1;
  }
  printf("\n The absolute value for the minimum input: %4d", abVal);
}
