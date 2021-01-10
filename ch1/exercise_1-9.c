#include <stdio.h>

int main()
{
  int c, lastc;

  for (c = getchar(); c != EOF; c = getchar()) {
    if (c == ' ') {
      if (lastc != ' ') {
        putchar(c);
      }
    } else {
      putchar(c);
    }
    lastc = c;
  }
}