#include <stdio.h>

void ft_function1(int *t, int n) {
  int i;

  i = 0;
  while (i < n) {
    printf("%d", t[i] * t[i]);
  }
}

int ft_function2(int *n) {

  int resultat;
  resultat = (*n) * (*n);
  return resultat;
}
int main() {}
