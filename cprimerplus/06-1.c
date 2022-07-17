#include <stdio.h>

int main() {
  int num;
  while (scanf("%d", &num) == 1) {
    printf("num + 1 = %d\n", num + 1);
  }
}