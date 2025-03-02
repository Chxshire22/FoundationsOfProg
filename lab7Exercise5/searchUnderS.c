// a function that loops through the salary array and adds 1 to the count if a lower value is detected 
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
