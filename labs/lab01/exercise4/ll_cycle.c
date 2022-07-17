#include "ll_cycle.h"
#include <stddef.h>

int ll_has_cycle(node *head) {
  node *fp = head, *sp = head;
  while (fp && fp->next) {
    fp = fp->next->next;
    sp = sp->next;

    if (sp == fp)
      return 1;
  }
  return 0;
}
