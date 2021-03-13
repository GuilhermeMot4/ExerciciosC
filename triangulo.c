#include <stdio.h>

int main(){

    int a,b,c;
    
    printf("Digite os lados do seu triângulo\n");
    scanf("%d %d %d", &a, &b, &c);

    if((a == b+c) || (b == a+c) || (c == a+b)){
        printf("Triângulo degenerado\n");
    }
    else if((a > b+c) || (b > a+c) || (c > a+b)){
        printf("Triângulo impossível\n");
    }
    else{
        if(a == b && b==c){
            printf("Triângulo equilátero\n");
        }
        else if(a != b && b!=c && a!=c){
            printf("Triângulo escaleno\n");
       }
        else{
            printf("Triângulo isósceles\n");
       }
    }
    



return(0);
}
