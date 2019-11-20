#include <stdio.h>


void my_func (char** a ) {
	printf("I'm here");
}

int main() {
    	char b[3][4] = { "I", "am", "Tom" } ;
	my_func (b) ;

  return 0;
}
