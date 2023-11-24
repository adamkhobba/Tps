#include <stdio.h>
#include <stdlib.h>

int main() {
  int *P1;
  int *P2;
  int n;
  int i;
  int k;
  int j;

  i = 0;
  printf("put here you number @_@");
  scanf("%d", &n);
  P1 = (int *)malloc(n * sizeof(int));
  while (i < n) {
    if (i == 0)
      printf("entr le premier nombre");
    else
      printf("enter le %d eme nombre", i + 1);
    scanf("%d", (P1 + i));
    i++;
  }
  i = 0;
  while (i < n) {
    if (*(P1 + i) == 0)
      k++;
    i++;
  }
  P2 = (int *)malloc((n - k) * sizeof(int));
  j = 0;
  while (i < n - k) {
    if (*(P1 + i) != 0) {
      *(P2 + i) = *(P1 + j);
      j++;
    } else
      j++;
    i++;
  }
  return (0);
}
