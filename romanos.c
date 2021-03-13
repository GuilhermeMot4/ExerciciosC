#include <stdio.h>

int main(){


    int n;

    printf("*DECIMAL PARA ROMANO*\n");
    printf("Digite um número:\n");
    scanf("%d",&n);
    if(n < 4000 || n > 1 ){
        if(n >= 3000){
            printf("MMM");
            n = n - 3000;         
        }
        if(n >= 2000){
            printf("MM");
            n = n - 2000;           
        }
        if(n >= 1000){
            printf("M");
            n = n - 1000;        
        }
        if(n >= 900){
            printf("CM");
            n = n - 900;      
        }
        if(n >= 500){
            printf("D");
            n = n - 500;         
        }
        if(n >= 400){
            printf("CD");
            n = n - 400;        
        }
        if(n >= 300){
            printf("CCC");
            n = n - 300;      
        }
        if(n >= 200){
            printf("CC");
            n = n - 200;        
        }
        if(n >= 100){
            printf("C");
            n = n - 100;     
        }
        if(n >= 90){
            printf("XC");
            n = n - 90;    
        }
        if(n >= 50){
            printf("L");
            n = n - 50;          
        }
        if(n >= 40){
            printf("XL");
            n = n - 40;         
        }
        if(n >= 30){
            printf("XXX");
            n = n - 30;            
        }
        if(n >= 20){
            printf("XX");
            n = n - 20;           
        }
        if(n >= 10){
            printf("X");
            n = n - 10;           
        }
        if(n >= 9){
            printf("IX");
            n = n - 9;           
        }
        if(n >= 5){
            printf("V");
            n = n - 5;           
        }
        if(n >= 4){
            printf("IV");
            n = n - 4;           
        }
        if(n >= 3){
            printf("III");
            n = n - 3;           
        }
        if(n >= 2){
            printf("II");
            n = n - 2;           
        }
        if(n >= 1){
            printf("I");
            n = n - 1;           
        }
    printf("\n");
    }
return(0);
}
