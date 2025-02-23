#include <stdio.h>

int main() {

  int speed = 0; // declare variable for speed

  printf("\n\n Input car speed: \t"); // tell user to input car speed

  scanf("%d", &speed); // store car speed input.

  // issue fines depending on speed
  if (speed <= 0) {
    printf("\n\t Scanner error.");
  } else if (speed > 80) {
    printf("\n\t Issue $200 fine.");
  } else if (speed > 70) {
    printf("\n\t Issue $150 fine.");
  } else if (speed > 65) {
    printf("\n\t Issue $80 fine.");
  } else if (speed > 60) {
    printf("\n\t Issue warning.");
  } else {
    printf("\n\t Ignore");
  }

  return 0;
}
