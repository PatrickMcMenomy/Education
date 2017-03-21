#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int k;
string p;

int main ( int argc, string argv[]) {
  if ( argc == 2 ) {
    // make argv[1] an int.
    k = atoi(argv[1]);

    // ask user for plaintext
    printf("plaintext: ");
    p = GetString();

    // iterate over string 1 char at a time.
    for (int i = 0, n = strlen(p); i < n; i++){
      if ( isalpha(p[i]) ) {
        if (isupper(p[i]) ) {
          printf("%c", (((p[i] - 'A') + k )% 26) + 'A' );
        }
        else if (islower(p[i]) ) {
          printf("%c", (((p[i] - 'a') + k )% 26) + 'a' );
        }
      }
      else {
	      printf("%c", p[i]);
      }
    }

    printf("\n");
    return 0;
  }
  else {
    printf("Usage: ./ceaser k\n");
    return 1;
  }
}
