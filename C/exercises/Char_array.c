#include <stdio.h>
#define MAXLINE 1000

int getline(char line[], int maxline);
void copy(char to[], char from[]);

int main()
{
  //Save and print the longest input line.
  int current_line_length;
  int max;
  char current_line[MAXLINE];
  char longest_line[MAXLINE];

  max = 0;
  
  while ((current_line_length = getline(current_line, MAXLINE)) > 0) {
    if (current_line_length > max) {
      max = current_line_length;
      copy(longest_line, current_line);
    }
  }

  if (max > 0) {printf("%s", longest_line);}

  return 0;
}

/* --- FUNCTION DEFINITIONS BELOW --- */

/* getline: will read a line into char array s[] and return the length */
int getline(char s[], int limit){
  int c, i;
   
  for (i=0; i<limit-1 && (c=getchar())!=EOF && c!='\n'; ++i) {
    s[i] = c;
  }
  
  if (c == '\n') {
    s[i] = c;
    ++i;
  }

  s[i] = '\0';  /* null character in C which marks the end of a string */
  return i;

}


/* copy: will copy char array from[] into char array to[], assuming to[] is big enough */
void copy(char to[], char from[]){
  int i;
  i = 0;

  while ((to[i] = from[i]) != '\0') {++i;}
}

