/*
  mario.c
*/

#include <stdio.h>
#include <cs50.h>

int height;

int main (void) {

  // Collect and validate input to be a positive int between 0 and 23 inclusive.
  do {
    printf("Height: ");
    height=GetInt();

  }
    while (height < 0 || height > 23);

  // Loop to draw pyramid.
  for (int i = 0; i < height; i++) {

    // loop to draw spaces
    for (int s = height; s > i; s--) {
     printf(" ");
    }

    //loop to draw #s
    printf("#");
    for (int h = 0; h <= i; h++) {
      printf("#");
    }

    // Print new line
    printf("\n");
  }
}
