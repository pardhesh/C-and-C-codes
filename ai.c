#include <stdio.h>

int sum_of_digits(int n) {
  int sum = 0;

  while (n > 0) {
    sum =sum + n % 10;
    n =n/ 10;
  }

  return sum;
}
int main() {
	int n;
  printf("enter an number");
	scanf("%d",&n);
  int sum = sum_of_digits(n);
  printf("The sum of the digits of %d is %d\n", n, sum);

  return 0;
}

