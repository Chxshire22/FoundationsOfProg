#include <stdio.h>
#include <stdlib.h>
//  #include "mylib.h"

void inputNumOfSalaries(int *numOfSalaries);
void popArr(float arr[], int numOfSalaries);
int looping(float salaries[], int condition, int numOfSalaries);
void findMax(float *salary, float *container);
void findMin(float *salary, float *container);
void findSum(float *salary, float *container);
int searchUnderS(float salaries[], float sInput, int numOfSalaries);

int main() {
  // initialize and declare variables to be used 
  int numOfSalaries = 0; // how many salries to be input
  float sInput = 0;    // store the input value of s
  float max = 0;
  float min = 0;
  float avg = 0;
  int lowerThanSCount = 0;

  // use malloc to create array dynamically LINK FOR MY REFERENCE
  // https://www.youtube.com/watch?v=R0qIYWo8igs&t=309s

  // prompt the user to input how many number of salaries
  inputNumOfSalaries(&numOfSalaries); // must happen BEFORE malloc is called 
  float *salaries; 
  salaries = malloc(sizeof(float) * numOfSalaries); // use malloc to assign working stoarge for array
 

  // prompt user to input salaries input into salary array
  popArr(salaries, numOfSalaries);                         // populate the salary array
  max = looping(salaries, 1, numOfSalaries);               // find the max
  min = looping(salaries, 2, numOfSalaries);               // find the min
  avg = looping(salaries, 3, numOfSalaries) / (float)numOfSalaries;  // find the average

  printf("\n\n The max is: $%.2f", max);
  printf("\n The min is: $%.2f", min);
  printf("\n The average is: $%.2f", avg);

  printf("\n Look for number of salaries under: $"); // prompt user that they have to input a number
  scanf("%f", &sInput);
  lowerThanSCount = searchUnderS(salaries, sInput, numOfSalaries);
  printf("\n There are %d salaries that are lower than $%.2f.", lowerThanSCount,
         sInput);

  return 0;
}

void inputNumOfSalaries(int *numOfSalaries){
  printf("\n Please input the number of salaries: ");
  scanf("%d", numOfSalaries);
  printf("\n OK, %d number of salaries.\n\n", *numOfSalaries); 
}

// a reusable loop that outsources computation to other functions
int looping(float salaries[], int condition, int numOfSalaries) {
  int counter = 0;
  float container = salaries[0];  // store the result to return to main loop for printing
  for (counter = 1; counter < numOfSalaries; counter++) {
    if (condition == 1)  // find max
    {
      findMax(&salaries[counter],
              &container);  // outsource to another function to compute max
    }
    if (condition == 2) {
      findMin(&salaries[counter],
              &container);  // outsource to another function to compute min
    }
    if (condition == 3) {
      findSum(&salaries[counter],
              &container);  // outsource to another function to compute sum for
                            // average
    }
  }
  return container;
}

// an function that replaces value in the container if the comparison is higher
void findMax(float *salary, float *container) {
  if (*container < *salary) {
    *container = *salary;
  }
}

// a function that replaces the value of the container if the comaprison is
// higher
void findMin(float *salary, float *container) {
  if (*container > *salary) {
    *container = *salary;
  }
}

// function to populate array of salaries
void popArr(float salaries[], int numOfSalaries) {
  int counter = 0;  // declare counter;
  for (counter = 0; counter < numOfSalaries; counter++) {
    printf("\n Please input a salary: $");  // prompt user to input salary
    float verifyContain = 0;  // container to verify that it's a valid input
    if (scanf("%f", &verifyContain) != 1 ||
        verifyContain <=
            0) {  // scanf fails or number is 0 or under repeat prompt
      printf("\n INVALID INPUT. TRY AGAIN\n");
      counter--;
      while (getchar() !=
             '\n');  // encountered an infinite loop. forums say use this line
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

// a function that adds values

void findSum(float *salary, float *container) { *container += *salary; }

// a function that loops through the salary array and adds 1 to the count if a
// lower value is detected
int searchUnderS(float salaries[], float sInput, int numOfSalaries) {
  int counter = 0;
  int lowerThanSCount = 0;
  for (counter = 0; counter < numOfSalaries; counter++) {
    if (salaries[counter] < sInput) {
      lowerThanSCount++;
    }
  }
  return lowerThanSCount;
}
