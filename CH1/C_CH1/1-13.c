#include <stdio.h>

// print histogram of length of words fed into method
int main() {
  int word_length_histogram[10];

  for (int i = 0; i < 10; i++) {
    word_length_histogram[i] = 0;
  }
  char input_char;
  
  int word_length;

  while ((input_char = getchar()) != EOF) {

    // terminate word, save length to array, reset length
    if (input_char == ' ' || input_char == '\t' || input_char == '\n') {
      if (word_length <= 9) {
	printf("saving length in histogram[0] forced\n");
	++word_length_histogram[0];
	word_length = 0;
      } else if (word_length > 99){
	printf("saving length in histogram[9] forced\n");
	++word_length_histogram[9];
	word_length = 0;
      } else {
	printf("saving length in histogram[%d]\n", word_length/10);
	++word_length_histogram[word_length / 10];
	word_length = 0;
      }
    } else {
      word_length++;
      input_char = getchar(); // eat up the enter
    }
  }

  for (int category = 0; category < 10; category++) {
    printf("%d - %d | ", (category * 10), ((category * 10) + 9));
    for (int occurence = 0; occurence < word_length_histogram[category]; occurence++) {
      printf("* ");
    }
    printf("\n");
  }
}
