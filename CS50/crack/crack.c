
// Implement a password cracker.
#define _XOPEN_SOURCE
#include <unistd.h>
#include <stdio.h>
#include <cs50.h>

string password;
string hash; // This is the stored password needing cracked
char salt[2];

int main (int argc, string argv[]) {
  if (argc == 2) {

    // Store the encrypted password in hash and generate salt. 
    hash = argv[1];
    salt[0] = hash[0];
    salt[1] = hash[1];
    printf("salt is %s!\n", salt);

    // Check to see if hash is already decrypted. 
    if ( hash != password) {
      
      // Crack password.
      
    }
  else {
    printf("Usage: ./crack hash\n");
    return 1;
  }
  return 0;
  }
}
