#include <stdio.h>
#include <stdlib.h>

void ft_swap(float *fl1, float *fl2) {
  float *f;

  *f = *fl1;
  *fl1 = *fl2;
  *fl2 = *f;
}

int main() {
  int n;
  float *t;
  int i;

  printf("enter la size de votre tableau");
  scanf("%d", &n);
  t = (float *)malloc(n * sizeof(int));
  // I dont what I should exactly in this case
  // should I have a code inlcuded in an array or the use should give it to me .
  i = 0;
  while (i < n) {
    scanf("%f", (t + i));
  }
  i = 0;
  while (0 < n) {
    ft_swap((t + i), (t + n));
    i++;
    n--;
  }
  return (0);
}
