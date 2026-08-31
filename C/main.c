#include <stdio.h>
#define TRACY 3

int main()
{
  /*
   * File Copying / copying input to output
   *
   * Here is the simplest e.g. of a program that copies its input to its output
   * one character at a time. 
   *
   * STR: What appears to be a character on the keyboard or screen is of course,
   * like everything else, stored internally just as a bit pattern. The type char
   * is specifically meant for storing such character but integers can also be used.
   *
   * If signed, -128 to 127
   * If not signed, 0 to 255
   * since char is typically 1 byte in a char[], anything out of range will be truncated.
   *
   * This is a real performance/cache-density trick since a char[] packs 4x tighter than a
   * int[] of the same length, which matters for cache line utilization.
   *
   * If you want proper small range numbers without the ambiguity, <stdint.h> provides
   * int8_t / uint8_t which are typical aliases for signed char and unsigned char -- 
   * same storage with a clearer intent.
   *
   * We use int because copy must be big enough to hold any value that getchar returns
   * We cant use char because  copy must be big enough to hold EOF in addition to any
   * possible char. Therefore we use int
   *
   * EOF for end of file is an integer defined in <stdio.h> but the specific numeric val
   * doesn't matter as long as it is not the same as any char value.
   *
   * By using the symbolic constant, we are assured that nothing in the program depends on
   * the specific numeric value.
   *
   * The program for copying will also be rewritten concisely using concise as the variable
   *
   */
  
    /*
    int copy;
    copy = getchar();

    while (copy != EOF) {
      putchar(copy);
      copy = getchar();
    }

    int concise;
    while ((concise = getchar()) != EOF) {
      putchar(concise);
    }
    */
    printf("Type something of your choice. Press Enter. Hold <Ctrl> while pressing <Z>. Hit Enter when done.\n");
    long num_copies;
    num_copies = 0;
    while (getchar() != EOF) {
      ++num_copies;
    }
    printf("%ld copies counted including whitespace and new-line characters.\n", num_copies);
    
    
    /* This next program will count input lines.
     * The standard library ensures that an input text stream appears as a sequence of lines,
     * each terminated by a newline. Hence, counting lines is just counting newlines:
     */
    
    printf("Welcome to Line Counting...\n");
    printf("Same goes here. Type multiple lines of your choice. Press Enter one more time after the final line. Hold <Ctrl> while pressing <Z>. Hit Enter when done.\n");
    int c, num_lines;
    num_lines = 0;

    while ((c = getchar()) != EOF) {
      if (c == '\n') {
        ++num_lines;
      }
    }
    printf("%d lines counted.\n", num_lines);
    
    return 0;  
}
