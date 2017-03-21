#include <stdio.h>
#include <cs50.h>

int main (void) {
  
  // Ask user for input.
  printf("minutes: ");
  int x=GetInt();

  // Check to see if the int is positive.
  if (x<=0){
    printf("bottles: 0\n");
  }

  // Calculate number of 16oz bottles this would be.
  else {
    printf("bottles: %i\n", x * 12);
  }
}
  
