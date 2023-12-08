#include <stdio.h>

void LIRE_DIM(int L, int C, int LMAX, int CMAX) {
  int MAT[LMAX][CMAX];
  int i;

  i = 0;
  if (L < LMAX && C < CMAX)
    while (i < C) {
      scanf("%d", &MAT[L][i]);
    }
}
// b)

void LIRE_MAT(int L, int C, int **MAT, int CMAX) {
  int i;
  int j;

  i = 0;
  while (i < L) {
    j = 0;
    while (j < C) {
      scanf("%d", (*(MAT + j) + i));
      j++;
    }
    i++;
  }
}
// c)

void ECRIRE_MAT(int L, int C, int **MAT, int CMAX) {
  int i;
  int j;

  i = 0;
  while (i < L) {
    j = 0;
    while (j < C) {
      printf("%d", *(*(MAT + j) + i));
      j++;
    }
    i++;
  }
}
// d)

long SOMME_MAT(int **MAT, int L, int C) {
  int i;
  int j;
  long n;
  i = 0;
  while (i < L) {
    j = 0;
    while (j < C) {
      n += *(*(MAT + j) + i);
    }
  }
  return (n);
}
