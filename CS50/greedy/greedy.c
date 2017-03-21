//
//greedy.c
//less comfy
//

#include <stdio.h>
#include <cs50.h>



int main (void) {
  // Prompt the user for amount of change required and validate.
  int total;
  int coins = 0;
  do {
    printf("Change: ");
    // Store value in "change" variable.
    total = GetFloat() * 100;
  }
  while ( total <= 0.0 );
  
  // Calculate how many quarters.
  while ( total >= 25 ) {
    total = total - 25;
    coins++;
  }

  // Calculate how many dimes.
  while ( total >= 10) {
    total = total - 10;
    coins++;
  }
  
  // Calculate how many nickles.
  while ( total >= 5) {
    total = total - 5;
    coins++;
  }
  
  // Calculate how many pennies.
  while ( total >= 1) {
    total = total - 1;
    coins++;
  }

  // Announce total number of coins.   
  printf("Total coins is %i\n", coins);
}
