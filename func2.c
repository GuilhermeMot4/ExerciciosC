#include <stdio.h>


void lerVet(int v[]){
	int i;
	for(i=0;i<5;i++){
		scanf("%d", &v[i]);
	}
}

void somaVet(int v1[], int v2[], int soma[]){

	int i;

	for(i=0;i<5;i++){
		soma[i] = v1[i] + v2[i];
	}

}

void imprimeVet(int v[]){
	int i;
	for(i=0;i<5;i++){
		printf("%d", v[i]);
	}
	printf("\n");
}


int main(){
	
	int v1[5], v2[5],soma[5];

	lerVet(v1);
	lerVet(v2);

	somaVet(v1,v2,soma);

	imprimeVet(v1);
	imprimeVet(v2);
	imprimeVet(soma);


return 0;
}