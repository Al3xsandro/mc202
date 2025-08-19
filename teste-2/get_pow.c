#include <stdio.h>

void get_pow(float num, int exp) {
    float value = 1;

    for (int i=0; i<exp; i++) {
    	value *= num;
	printf("%f/n", num);
    }
    printf(" %f\n", value);
}

int main() {
    float num;
    int exp;
    printf("Digite um inteiro e um float: ");
    scanf("%d %f", &exp, &num);
    get_pow(num, exp);
    return 0;
}
