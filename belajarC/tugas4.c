#include <stdio.h>
int i,j;
int A[3][3];
int B[3][3];
int matrikHasil[3][3];
	int inputArray() {
	
	for (i=0; i<2; i++) {
		for (j=0; j<2; j++) {
			printf("Matriks A[%d][%d]= ",i,j);scanf("%d",&A[i][j]);
			}
		}
	for (i=0; i<2; i++) {
		for (j=0; j<2; j++) {
			printf("Matriks B[%d][%d]= ",i,j);scanf("%d",&B[i][j]);
		}
	}
}
	
	int jumlahArray() {
	for(i=0;i<2;i++) { 
		for(j=0;j<2;j++) { 
			matrikHasil[i][j]= A[i][j]+ B[i][j]; 
			} 
		}
	}
	
int main()
{
	inputArray();
	jumlahArray();
	printf("\n\nMatrik Hasil\n");
	for (i=0; i<2; i++) {
		for (j=0; j<2; j++) {
			printf("%d\t",matrikHasil[i][j]);
		}
		printf("\n");
	}
	return 0;
}
