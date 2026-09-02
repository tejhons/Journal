#include <stdio.h>
#define MAXLINE 1000

int max;
char current_line[MAXLINE];
char longest_line[MAXLINE];
/* Notice initialized outside of main */
/* States their type and causes storage to be allocated for them */

int getline(void); /* the word void must be used for an explicitly empty list */
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
  int c, i;
  extern char current_line[];
  
  for (i=0; i<MAXLINE-1 && (c=getchar())!=EOF && c!='\n'; ++i) {
    current_line[i] = c;
  }

  if (c == '\n') {
    current_line[i] = c;
    ++i;
  }
  current_line[i] = '\0';
  return i;
}

void copy(void){
  int i;
  extern char current_line[], longest_line[];

  i = 0;
  while ((longest_line[i] = current_line[i]) != '\0') {++i;}  
}
