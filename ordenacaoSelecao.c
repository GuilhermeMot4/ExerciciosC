#include <stdio.h>

int main(){

    int n,i,j,aux,menor,vetor[100];
    
    scanf("%d", &n);
    for(i=0;i<n;i++){
        scanf("%d", &vetor[i]);
    }

    for(i=0;i<n;i++){
        menor = i;
        for(j=i+1;j<n;j++){
            if(vetor[j] < vetor[menor]){
                menor = j; 
            }
            aux = vetor[i];
            vetor[i] = vetor[menor];
            vetor[menor] = aux;
        }
    }

    for(i=0;i<n;i++){
        printf("%d ", vetor[i]);
    }
    
return(0);
}
