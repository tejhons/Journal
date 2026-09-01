#include <stdio.h>
#define MAXLINE 1000

int max;
char current_line[MAXLINE];
char longest_line[MAXLINE];
/* Notice initialized outside of main */

int getline(void);
void copy(void);

int main() 
{
  /* longest input line specialized version */
  int length;

  extern int max;
  extern char longest_line[];
  max = 0;

  while ((length = getline()) > 0) {
    if (length > max) {
      max = length;
      copy();
    }
  }

  if (max > 0) {printf("%s", longest_line);}
  
  return 0;
}

/* --- FUNCTION DEFINITIONS --- */

int getline(void){
  
}

void copy(void){
  
}
