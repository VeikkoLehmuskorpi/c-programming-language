#include <stdio.h>

int main()
{
  float celsius;
  float fahr;
  float lower = 0;
  float upper = 200;
  float step = 20;

  celsius = lower;
  printf("Celsius as fahrenheit\n");
  while (celsius <= upper) {
    fahr = (5.0/9.0) * (celsius - 32.0);
    printf("%3.0f %6.1f\n", celsius, fahr);
    celsius = celsius + step;
  }
}