#include <stdio.h>
#define N 10

void verify_matrix(int matrix[][N]) {
     int aux = 1;
     for (int i = 0; i < N; i++) {
     	 for (int j = i+1; j < N; j++) {
	     if (matrix[i][j] != 0) {
		// printf("A matriz não é triangular inferior");
		aux = 0;
		break;
	     }
	 }
     }
     for (int i = N-1; i > 0; i--) {
     	 for (int j = 0; j < i; j++) {
	     if (matrix[i][j] != 0) {
	     	// printf("A matriz não é triangular superior");
		aux = 0;
		break;
	     }
	 }
     }

     if (aux == 1) {
     	printf("Está é uma matriz diagonal!\n");
     } else {
     	printf("Está não é uma matriz diagonal!\n");
     }
}

int main() {
    int matrix[N][N] = {
    	{1, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 1, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 1, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 1, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 1, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 1, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 1, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 1, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 1, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
    };
    verify_matrix(matrix);
    return 0;
}
