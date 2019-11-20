#include <stdio.h>
int main ()
{
   char* array1 ;
   char* array2 = "Mel";
   char  array3 [3] ;

   FILE *theFile = fopen ("test_file.txt", "r");

   fgets (array1, 4, theFile) ;
   fgets (array2, 4, theFile) ;
   fgets (array3, 4, theFile) ;

   fclose (theFile);
   return 0;
 }
