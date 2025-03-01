/*
Prompt user to input salaries 10 times and input into salary array.
After that, prompt the user to input an amount for “S”.
Create a function that loops through the salary array. Make it dynamic, such
that if it receives a specific argument, it will output either the min, max,
sum, or an array. This achieves the requested condition to reuse the code but
having each module do 1 thing only. This module only loops, and is called by
other functions that return the requested output. Within the loop, if the
argument states that it is searching for max, for example, execute a function
within the loop that searches for max. How to search for max or min: Declare a
variable called max and set it as 0 or the first element of the index. Search
for the highest salary by looping through the array. For every iteration of the
loop, if the element at the index is higher than the value of max, swap the
current element held in max for the element at the current index. Declare a
variable called min and the first element of the index. Search for the lowest
salary by looping through the array. For every iteration of the loop, if the
element at the index is lower than the value of min, swap the current element
held in min for the element at the current index. How to get the average Declare
a variable called sum. Loop through the array and add each element to sum. Use
size of array divided over size of int to search for the length of array. Take
the sum and divide it over the length to find and return the average. How to
find salaries under “S” Declare an integer variable to hold a number called
underS. Use the established loop and an if…else statement to add 1 to underS

*/

#include <stdio.h>

// function prototypes
void popArr(float arr[], int len);
int looping(float salaries[], int condition, int len);
void findMax(float *salary, float *container);
void findMin(float *salary, float *container);
void findSum(float *salary, float *container);
int searchUnderS(float salaries[], float sInput, int len);

int main() {
  // prompt user to input salaries 10 times and input into salary array

  float salaries[10]; // store arr of salaries
  float sInput = 0;   // store the input value of s
  int len = 0;
  float max = 0;
  float min = 0;
  float avg = 0;
  int lowerThanSCount = 0;
  len = sizeof(salaries) / sizeof(float); // size of array

  popArr(salaries, len); // populate the salary array
  max = looping(salaries, 1, len);
  min = looping(salaries, 2, len);
  avg = looping(salaries, 3, len) / (float)len;

  printf("\n\n The max is: $%.2f", max);
  printf("\n The min is: $%.2f", min);
  printf("\n The average is: $%.2f", avg);

  printf("\n Look for number of salaries under: $");
  scanf("%f", &sInput);
  lowerThanSCount = searchUnderS(salaries, sInput, len);
  printf("\n There are %d salaries that are lower than %.2f.", lowerThanSCount,
         sInput);

  return 0;
}

// function to populate array of salaries
void popArr(float salaries[], int len) {
  int counter = 0; // declare counter;
  for (counter = 0; counter < len; counter++) {
    float verifyContain = 0; // container to verify that it's a valid input
    printf("\n Please input a salary: $"); // prompt user to input salary
    if (scanf("%f", &verifyContain) != 1 || verifyContain <= 0) {
      printf("\n INVALID INPUT. TRY AGAIN\n");
      counter--;
      while (getchar() != '\n')
        ; // encountered an infinite loop. forums say use this line
          // which reads and discards characters in buffer until new
          // line which effectively discards everything in the
          // buffer. apparently scanf has a buffer, and when the
          // input is invalid, and i repeat the loop, the invalid
          // input is still in buffer so it will just keep fulfilling
          // the invalid input condition. IMPORTANT LINE
    } else {
      salaries[counter] = verifyContain;
    }
  }
}

int looping(float salaries[], int condition, int len) {
  int counter = 0;
  float container = 0; // store the result to return to main loop for printing
  for (counter = 0; counter < len; counter++) {
    if (condition == 1) // find max
    {
      findMax(&salaries[counter],
              &container); // outsource to another function to compute max
    }
    if (condition == 2) {
      findMin(&salaries[counter],
              &container); // outsource to another function to compute min
    }
    if (condition == 3) {
      findSum(&salaries[counter],
              &container); // outsource to another function to compute sum for
                           // average
    }
  }
  return container;
}

void findMax(float *salary, float *container) {
  if (*container < *salary) {
    *container = *salary;
  }
}
void findMin(float *salary, float *container) {
  if (*container == 0) {
    *container = *salary;
  }
  if (*container > *salary) {
    *container = *salary;
  }
}

void findSum(float *salary, float *container) { *container += *salary; }

int searchUnderS(float salaries[], float sInput, int len) {
  int counter = 0;
  int lowerThanSCount = 0;
  for (counter = 0; counter < len; counter++) {
    if (salaries[counter] < sInput) {
      lowerThanSCount++;
    }
  }
  return lowerThanSCount;
}
