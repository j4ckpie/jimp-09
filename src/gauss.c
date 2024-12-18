#include "gauss.h"
#include <math.h>

#define EPS 1e-12

/**
 * Zwraca 0 - elimnacja zakonczona sukcesem
 * Zwraca 1 - macierz osobliwa - dzielenie przez 0
 */

int eliminate(Matrix *mat, Matrix *b){
	int n = mat-> r; // liczba wierszy (zakladam ze macierz jest kwadratowa)
	for(int k = 0; k < n; k++){
		int pivot = k;
	
		// wyznaczenie elementu glownego
		for(int i = k + 1; i < n; i++) {
			if(fabs(mat->data[i][k]) > fabs(mat->data[pivot][k])) {
				pivot = i;
			}
		}

		// zamiana wierszy jesli konieczna
		if(pivot != k) {
			for(int j = 0; j < n; j++) {
				double tmp = mat->data[k][j];
				mat->data[k][j] = mat->data[pivot][j];
				mat->data[pivot][j] = tmp;
			}
			double btmp = b->data[k][0];
			b->data[k][0] = b->data[pivot][0];
			b->data[pivot][0] = btmp;
		}

		if(fabs(mat->data[k][k]) < EPS) return 1; // macierz osobliwa

		for(int i = k + 1; i < n; i++){
			double factor = mat->data[i][k] / mat->data[k][k]; // wyznaczam czynnik
			for(int j=k;j<n;j++){
				mat->data[i][j] -= factor * mat->data[k][j];
			}
			b->data[i][0] -= factor * b->data[k][0];
		}
	}
	return 0; // sukces
}

