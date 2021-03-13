#include <stdio.h>


void lerVet(int v[],int n){
	int i;
	for(i=0;i<n;i++){
		scanf("%d", &v[i]);
	}
}

void imprimeVet(int v[],int n){
	int i;
	for(i=0;i<n;i++){
		printf("%d", v[i]);
	}
	printf("\n");
}

void ordenaVetor(int v[],int n){
 	int i,j,aux;

 	for(i = 0; i < n; i++){
 		for (j = i+1; j < n; j++){
 			if(v[i] > v[j] ){
 				aux = v[i];
 				v[i] = v[j];
				v[j] = aux;
 			}
 		}
 	}

}


int main(){
	
	int v1[5],n;

	printf("Vetor com qts elementos?\n");
	scanf("%d", &n);
	lerVet(v1,n);

	imprimeVet(v1,n);
	ordenaVetor(v1,n);

	imprimeVet(v1,n);



return 0;
}