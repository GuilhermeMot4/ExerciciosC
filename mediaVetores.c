#include <stdio.h>

int main(){

    int n,i,vetor[100],soma;
    float media;
    
    scanf("%d", &n);
    soma = 0;
    for(i=0;i<n;i++){
        scanf("%d", &vetor[i]);
        soma = soma + vetor[i];
    }
    media = soma/n;
    printf("Média vale:%f\n", media);

    printf("Valores maiores que a média:\n");
    for(i=0;i<n;i++){
        if(vetor[i] > media){
            printf("%d\n", vetor[i]);
        }
    }
    
return(0);
}
