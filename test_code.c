#include <stdio.h>
#define ARRAY_SIZE 4

int main () {

  // char array[ARRAY_SIZE] = {'T', 'o', 'm', '\0'};
  char array3[ARRAY_SIZE] = {'T', 'o', 'm', 'J'};
  char array2b[ARRAY_SIZE] = {'M', 'e', 'l'};
  char* array2 = "Mel";

  FILE *myFile = fopen ("test_file.txt", "w");
  if (myFile == NULL) {
    printf("error, file does not exist");
    return (2);
  }
  else {
    // fputs (array, myFile) ;
    fputs (array2b, myFile) ;
    fputs ("\n", myFile);
    fputs (array3, myFile) ;
    fputs ("\n", myFile);
    fputs (array2, myFile) ;
    // fputs(array2, myFile);
    // fputs("Mel", myFile);
  }

  fclose (myFile);
  return 0;
}
