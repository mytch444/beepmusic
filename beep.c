#include <stdio.h>

int main(int argc, char *argv[]) {
  if (argc < 2) {
    printf("usage %i a-a--aa-a\n - pauses, anything else makes a beep\n");
    return;
  }
  
  int bps = 6;
  int wait = 1000000 / bps;

  int i;
  for (i = 1; argv[1][i]; i++) {
    if (argv[1][i] != '-')
      printf("\a\n");
    usleep(wait);
  }
  
  return 0;
}
