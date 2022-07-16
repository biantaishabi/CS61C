#include <inttypes.h>
#include <stdio.h>

int main() {
  int32_t me32 = 4567;

  printf("me32 = %" PRId32 "\n", me32);
  printf("sizeof me32 = %zd\n", sizeof(me32));
}