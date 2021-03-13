#include <stdio.h>
#include <math.h>

int main(){

    int n,i,maior,menor;
    float termos,desvio,media,soma,somax,x;
        
    desvio = 0;
    soma=0;
    somax=0;
    media=0;
    scanf("%d", &n);
    termos = n;
   
    i=1;
    while(i<= n){
        scanf("%f", &x);
        soma = soma + x;
        somax = somax + (x*x);

        if(x > maior){
            maior = x;
        }
        if(x < menor){
            menor = x;
            }
        i++;
    }

    media = soma/termos;
    desvio = sqrt((somax-soma*soma/termos)/(termos-1)); 

    printf("média %f\n", media);
    printf("desvio %f\n", desvio);
    printf("valor maior %d\n", maior);
    printf("valor menor %d\n", menor);
        


return(0);
}
