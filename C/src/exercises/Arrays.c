#include <stdio.h>

/* Counting digits, white space, and others */

int main()
{
  int c, i;
  int num_whites, num_others;
  
  int my_array[10]; //Declares my_array to be an array of ten integers. Array subscripts always start at zero, so the elements are my_array[0] - my_array[9].
  
  num_whites = 0;
  num_others = 0;
  
  for (i = 0; i < 10; ++i) {
    my_array[i] = 0;
  }
  
  /* The first if statement here determines whether the character in variable "c" is a digit. If it is, the numeric value of that digit is c - '0'
   * This works only if '0' - '9' have consecutive increasing values and fortunately, this is true for all character sets.
   * By definition, chars are just small integers, so char variables and constants are identical to ints in arithmetic expressions */  
  while ((c = getchar()) != EOF) {
    if (c >= '0' && c <= '9'){
      ++my_array[c-'0'];
    }
    else if (c == ' ' || c == '\n' || c == '\t'){
      ++num_whites;
    }
    else{
      ++num_others;
    }
  }

  printf("digits=");
  for (i = 0; i < 10; ++i) {
    printf(" %d", my_array[i]);
  }
  
  printf(", white space= %d, other= %d\n", num_whites, num_others);
  return 0;
}
