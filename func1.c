#include <stdio.h>
#include <math.h>


double potencia(int x, int y){
	return pow(x,y);
}

void troca(int *x, int *y){
	int aux;
	aux = *x;
	*x = *y;
	*y = aux;
}

double compara(int x, int y){

	if(x<y) return -1;
	if(x=y) return 0;

	return 1;
}

 int maiorValor(int tam, int vet[]){

 	int i,maior;

 	maior = vet[0];
 	for(i=1;i<tam;i++){
 		if(vet[i] > maior){
 			maior = vet[i]; 
 		}
 	}

 	return maior;
 }



int main(){
	
	int a,b,tam,i,numeros[100];

	printf("Digite valores para a e b\n");
	scanf("%d %d",&a, &b);
	printf("a elevado a b vale:%lf\n", potencia(a,b));


	printf("a vale %d e b vale %d\n", a,b);
	troca(&a,&b);
	printf("a vale %d e b vale %d\n", a,b);
	compara(a,b);

	printf("Digite a qtd de números\n");
	scanf("%d", &tam);

	for(i = 0;i<tam;i++){
		scanf("%d", &numeros[i]);
	}

	printf("Maior valor é:%d", maiorValor(tam, numeros));

	/*for(i = 0;i<tam;i++){
		printf("%d", numeros[i]);
	}*/

return 0;
}