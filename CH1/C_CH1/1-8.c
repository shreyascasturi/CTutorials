#include <stdio.h>

// count all instances of tabs, newlines, and blanks
int main() {

  int char_input = 0;
  int num_blanks = 0;
  int num_tabs = 0;
  int num_newlines = 0;


  while(1) {
    printf("enter a character: ");
    char_input = getchar();
    if (char_input != EOF) {
      if (char_input == '\t') {
	num_tabs++;
	getchar(); // this consumes ENTER
      } else if (char_input == '\n') {
	num_newlines++;	
      } else if (char_input == ' ') {
	num_blanks++;
	getchar();
      }
    } else {
      printf("\n");
      break;
    }
    printf("\n");
  }

  printf("\n");
  printf("amount of tabs: %d\n", num_tabs);
  printf("amount of blanks: %d\n", num_blanks);
  printf("amount of newlines: %d\n", num_newlines);
  return 0;
}

