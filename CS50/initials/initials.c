/*
  initials.c
  more comfy
*/


#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main (void) {

  // Get user input.
  printf("Name: ");
  string s = GetString();
  
  // make sure s is a string.
  if (s != NULL) {

    // count number of words in the string.
    int i = 0;
    for ( int n = strlen(s); i < n; i++) {

      // Get first letter of each word.
      if ( s[i] != ' ' && (s[i - 1] == ' '  || s[i - 1] == '\0')) {

	// print each letter capitalized.
	printf("%c", toupper(s[i]));
      }
    }
  }

  printf("\n");
}
