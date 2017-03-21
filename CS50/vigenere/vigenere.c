
#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int key;
string msg, keyword;

int main ( int argc, string argv[]) {
  if ( argc == 2 ) {

    //putting argv[1] into string variable 'segmentation fault without.
    keyword = argv[1];
    
    // Validate keyword
    for (int i = 0, n = strlen(argv[1]); i < n; i++) {
      if ( isalpha(keyword[i])) {
      }
      else {
	printf("keyword must be a string of characters.\n");
	return 1;
      }
    }

    // ask user for plaintext
    printf("plaintext: ");
    msg = GetString();

    // iterate over string 1 char at a time.
    for (int i = 0, j = 0, n = strlen(msg); i < n; i++){
      if (isalpha(msg[i]) ) {

	// Find the index for j.
	int keylen = strlen(keyword);
	int key = toupper(keyword[j % keylen]) - 'A';

	// Calculate the cipher.
	if (isupper(msg[i]) ) {
	  printf("%c", (msg[i] - 'A' + key ) % 26 + 'A' );
	}
	else if (islower(msg[i]) ) {
	  printf("%c", (msg[i] - 'a' + key) % 26 + 'a');
	}
	j++;
      }
      else {
	printf("%c", msg[i]);
      }
    }

    printf("\n");
    return 0;
  }
  else {
    printf("Usage: ./vigenere keyword\n");
    return 1;
  }
}
