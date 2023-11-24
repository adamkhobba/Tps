#include <stdio.h>
#include <stdlib.h>

int main() {
  int n;
  int m;
  int i;
  int *A;
  int *B;

  printf("taper la dimension N: ");
  scanf("%d", &n);
  A = (int *)malloc(n * sizeof(int));
  i = 0;
  while (i < n) {
    if (i == 0)
      printf("enter le premier nombre ");
    else
      printf("enter le %d eme nombre ", i + 1);
    scanf("%d", A + i);
    i++;
  }
  printf("taper la dimension M: ");
  scanf("%d", &m);
  B = (int *)malloc(n * sizeof(int));
  i = 0;
  while (i < n) {
    if (i == 0)
      printf("enter le premier nombre ");
    else
      printf("enter le %d eme nombre ", i + 1);
    scanf("%d", B + i);
    i++;
  }
  A = realloc(A, (n + m) * sizeof(int));
  i = 0;
  while (i < m) {
    *(A + n) = *(B + i);
    i++;
    n++;
  }
  i = 0;
  while (i < n + m) {
    printf("%d \n", *(A + i));
  }
  return (0);
}
