// a function that replaces the value of the container if the comaprison is higher
void findMin(float *salary, float *container) {
  if (*container > *salary) {
    *container = *salary;
  }
}