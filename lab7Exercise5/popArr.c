// function to populate array of salaries
void popArr(float salaries[], int len) {
  int counter = 0;  // declare counter;
  for (counter = 0; counter < len; counter++) {
    float verifyContain = 0;  // container to verify that it's a valid input
    printf("\n Please input a salary: $");  // prompt user to input salary
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