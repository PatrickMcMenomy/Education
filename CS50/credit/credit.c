/*
  Credit.c
  More Comfy
*/

#include <stdio.h>
#include <cs50.h>


long long cc_number;
int digits;
int checkSum;
int id;

int main (void) {

  // Get user input and validate.
  do {
    printf("Number: ");
    cc_number = GetLongLong();
    
      // Loop to count how many digits are in the number.
      for (digits = 0; cc_number > 0; digits++) {
     
	// Put truncated number in correct variable
	if ( digits % 2 == 0) {
	  checkSum = (cc_number % 10) + checkSum;
	}
	else {

	  // catch any double digit numbers.
	  if ( (cc_number % 10) * 2 > 9) {

	    // set i to double digit value
	    int i = (cc_number % 10) * 2;

	    // add both digits together.
	    do {
	      checkSum = i % 10 + checkSum;
	      i = i / 10;
	    }
	    while ( i > 0);
	  }
	  
	  else {

	    // take number times 2 and add it to the set.
	    checkSum = (cc_number % 10) * 2 + checkSum;
	  }
	}
	
	// put first 2 digits in id variable.
	if ( cc_number < 56 && cc_number > 10 ) {
	  id = cc_number;
	  cc_number = cc_number /10;
	}
	else {
	  cc_number = cc_number /10;
	}
      }      
  }
  while ( cc_number > 0);

  // Report Card Provider.
  if ( checkSum % 10 == 0 && digits == 15 && (id == 34 || id == 37) ) {
      printf("American Express\n");
  }
  else if ( checkSum % 10 == 0 && ( digits == 13 || digits == 16) && id / 10 == 4 ) {
      printf("Visa\n");
  }
  else if ( checkSum % 10 == 0 && digits == 16 && (id > 50 && id < 56) ) {
      printf("MasterCard\n");
  }
  else {
    printf("INVALID\n");
  }
}
