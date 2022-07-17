#include <stdio.h>
#include <string.h>

int main() {
  char buf[20] = "hello hello\n\n\n";
  printf("the length of string is: %zd\n", strlen(buf));
}