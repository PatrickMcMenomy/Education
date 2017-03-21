#include <stdio.h>
#include <cs50.h>

int x=0;

int main (void) {
  
  // Ask user for input.
  printf("How long was your shower? ");
  int x=GetInt();

  // Check to see if the int is positive.
  if (x<=0){
    printf("You didn't use any water.\n");
  }

  // Calculate number of 16oz bottles this would be.
  else {
    printf("Wow! That is comparable to %i 16 oz bottles of water!\n", x * 12);
  }
}
  
