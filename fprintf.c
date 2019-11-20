#include <stdio.h>

int main()
{
  int a = 5;
  char* string = "World";
  FILE *theFile = fopen ("output_file.txt", "w");

  fprintf (theFile, "Hello World\n") ;
  fprintf (theFile, "Hello %\s\n", string);
  fprintf (theFile, "a = %d\n", a);
  fprintf (theFile, "a = %x\n", a);
  fprintf (theFile, "a's address = %p\n", &a );

  fclose(theFile);

  return 0;
}
