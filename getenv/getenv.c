#include <stdlib.h>
#include <stdio.h>

int main()
{
  char *repstext;
  char *msg;
  int reps;
  int i;

  repstext = getenv("reps");
  reps = repstext ? atoi(repstext) : 10;

  msg = getenv("msg");
  if (msg == NULL)
    msg = "hello";

  for (i = 0; i < reps; ++i) {
    printf("%s\n", msg);
  }

  return 0;
}
