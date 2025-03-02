// an function that replaces value in the container if the comparison is higher
void findMax(float *salary, float *container) {
  if (*container < *salary) {
    *container = *salary;
  }
}