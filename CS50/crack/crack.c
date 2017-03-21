
// Implement a password cracker.
#define _XOPEN_SOURCE
#include <unistd.h>
#include <stdio.h>
#include <cs50.h>

string password;
string hash;

int main (int argc, string argv[]) {
  if (argc == 2) {
    hash = argv[1];

    if ( hash != password) {
      
      for (int i = 0; i < 256; i++) {
        crypt("aaaa", "50");
      }
      printf("%s\n", password);
    }
  }
  else {
    printf("Usage: ./crack hash\n");
    return 1;
  }
  return 0;
}
