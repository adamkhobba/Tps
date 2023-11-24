#include <stdio.h>

unsigned long long ft_check(int n, int k);

unsigned long long ft_factorial(int n) {
  if (n == 0)
    return 1;
  else
    return (n * ft_factorial(n - 1));
}

unsigned long long ft_C(int n, int k) {
  unsigned long long N;
  unsigned long long K;
  unsigned long long NK;
  unsigned long long C;

  if (ft_check(n, k) == 0) {
    return (0);
  }
  N = ft_factorial(n);
  K = ft_factorial(k);
  NK = ft_factorial(n - k);
  C = N / (K * NK);
  return C;
}
unsigned long long ft_check(int n, int k) {
  if (k > n)
    return (0);
  else
    return 1;
}

int main() {
  int n = 4;
  int k = 6;
  unsigned long long C;

  C = ft_C(n, k);
  printf("%llu", C);
  // printf("%llu", ft_factorial(4));
}
