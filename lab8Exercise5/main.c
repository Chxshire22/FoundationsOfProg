#include <stdio.h>
#include <string.h>

void fileOp(char fileName[]);

int main(int argc, char *argv[]) {
  // initialize and declare variables

  char fileName[255];  // to store the file name

  // check how many arguments supplied as mentioned in lab, argc == 2 if 1
  // argument is supplied

  if (argc == 2) {
    // open the file and count lines
    strcpy(fileName, argv[1]);
    fileOp(fileName);
  } else if (argc > 2) {
    printf("Too many arguments supplied.\n");
  } else {
    printf("One argument expected.\n");
  }

  return 0;
}

void fileOp(char fileName[]) {
  // open the file
  FILE *fp;  // for file pointer
  char name[255];
  int age = 0;
  float salary = 0;
  int counter = 0;
  fp = fopen(fileName, "r");

  printf("\n\t Name \t Age \t Salary");  // header to the print out
  // while end of file is not detected, scan and read each line of strings
  while (fscanf(fp, "%s %i %f", name, &age, &salary) != EOF) {
    counter++;
    printf("\n\t %s \t %d \t %.2f", name, age, salary);
  }
  fclose(fp);
  printf("\n %d lines detected.", counter);
}