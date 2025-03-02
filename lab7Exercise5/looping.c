// a reusable loop that outsources computation to other functions 
int looping(float salaries[], int condition, int len) {
  int counter = 0;
  float container = 0;  // store the result to return to main loop for printing
  for (counter = 0; counter < len; counter++) {
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