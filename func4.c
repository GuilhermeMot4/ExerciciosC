#include <stdio.h>


void ler(int m[][5],int l, int c){
	int i,j;

	for(i=0;i<l;i++){
		for(j=0;j<c;j++){
			scanf("%d", &m[i][j]);
		}
	}
}

void transposta(int m[][5],int l, int c){
	int i,j,aux;

	for(i=0;i<l;i++){
		for(j=i+1;j<c;j++){
			if(j != i){
				aux = m[i][j];
				m[i][j] = m[j][i];
				m[j][i]	= aux;
			}
		}
	}
}

void imprime(int m[][5],int l, int c){
	int i,j;

	for(i=0;i<l;i++){
		for(j=0;j<c;j++){
			printf("%d", m[i][j]);
		}
		printf("\n");
	}	
}


int main(){
	
	int m[5][5],l,c;

	printf("Matriz com qts linhas?\n");
	scanf("%d", &l);
	printf("Matriz com qts colunas?\n");
	scanf("%d", &c);

	ler(m,l,c);

	imprime(m,l,c);

	transposta(m,l,c);

	imprime(m,c,l);

return 0;
}