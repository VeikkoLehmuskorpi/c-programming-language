#include <stdio.h>

#define IN 1
#define OUT 0

#define FIRST_CHAR 32
#define LAST_CHAR 127
#define NUM_CHARS (LAST_CHAR - FIRST_CHAR) + 1

int main()
{
  int c, state;
  state = OUT;

  int numChars[NUM_CHARS];
  for (int i = 0; i < NUM_CHARS; i++) {
    numChars[i] = 0;
  }

  while ((c = getchar()) != EOF) {
    if (c >= FIRST_CHAR && c <= LAST_CHAR) {
      numChars[c - FIRST_CHAR]++;
    }
  }

  for (int j = 0; j < NUM_CHARS; j++) {
    putchar(j);
    printf(" ");

    for (int k = 0; k < numChars[j]; k++) {
      printf("|");
    }

    printf("\n");
  }

  return 0;
}