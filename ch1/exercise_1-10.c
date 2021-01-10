#include <stdio.h>

int main()
{
  int c;

  for (c = getchar(); c != EOF; c = getchar()) {
    if (c == '\t') {
      putchar('\\');
      putchar('t');
    }
    if (c == '\b') {
      putchar('\\');
      putchar('b');
    }
    if (c == '\\') {
      putchar('\\');
      putchar('\\');
    }
    if (c != '\t' && c != '\b' && c != '\\') {
      putchar(c);
    }
  }
}