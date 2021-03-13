#include <stdio.h>
#include <math.h>

int main(){

    float a,b,c,delta,den,x1,x2;

    printf("Digite os valores de a,b e c no formato: ax² + bx + c = 0\n");
    scanf("%f %f %f", &a,&b,&c);
    delta = (b*b) - 4.0*a*c;
    den = 2.0*a;

    if(a != 0){
        if(delta == 0){
            x1 = (-b + sqrt(delta))/den;
            printf("raiz: %f", x1);
        }
        else if(delta > 0){
            x1 = (-b +sqrt(delta))/den;
            x2 = (-b - sqrt(delta))/den;

            printf("raiz 1: %f\n", x1);
            printf("raiz 2: %f\n", x2);

        }
        else{
            printf("Não existem raizes real");
        }
         
    }
    else{
        printf("Não é equação do 2º grau");    
    }


return(0);
}
