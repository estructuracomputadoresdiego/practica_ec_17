#include "stdlib.h"
#include "stdio.h"
#include "time.h"

void inicializa(int vector[], int size);

int main(int argc, char const *argv[]){
	
	srand(time(NULL));

	int size;

	printf("Introduce el tamanyo del vector\n");
	scanf("%d", &size);

	int* vector;
	vector = (int*)malloc(sizeof(int)*size);

	inicializa(vector ,size);

	for (int i = 0; i < size; ++i){
		printf("%d, ", vector[i]);
	}
	printf("\n");
	return 0;
}
void inicializa(int *vector, int size){

	int num;
	int repetir;

	for (int i = 0; i < size; ++i){
		
		do{
			
			num = rand()%50+1;
			repetir = 0;

			for (int j = 0; j <= i; ++j){

				if (vector[j] == num){
					repetir = 1;
				}
			}
			
			vector[i] = num;
		}while(repetir == 1);
	}
}

