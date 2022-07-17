#include <stdio.h>

void pound(int n) {
  while (n--)
    putchar('#');
  putchar('\n');
}

int main() {
  pound('\n');
  return 0;
}