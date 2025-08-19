#include <stdio.h>

void print_even(int max) {
  for (int i=0; i <= max; i += 2)	
    printf(" %d\n", i);
};

int main() {
  int number;
  printf("Digite um valor: ");
  scanf("%d", &number);
  print_even(number);
  return 0;
};
