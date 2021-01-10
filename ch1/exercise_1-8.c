#include <stdio.h>

int main()
{
  int c, blanks, tabs, nl;
  blanks = 0;
  tabs = 0;
  nl = 0;

  for (c = getchar(); c != EOF; c = getchar()) {
    if (c == '\n') {
      ++nl;
    }
    if (c == '\t') {
      ++tabs;
    }
    if (c == ' ') {
      ++blanks;
    }
  }

  printf("\nBlanks: %d\nTabs: %d\nNew lines: %d\n", blanks, tabs, nl);
}