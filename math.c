#include <stdio.h>
#include <math.h>

int main(){

    int n=1000;
    int i;
    float x;
    for(i=1;i<=10;i++){
        x = i;
        printf("num = %d ",i);
        x = sqrt(x);
        printf("raiz = %6.4f ",x);
        x = log10(x);
        printf("log(base 10)= %6.4f\n",x);
    }
return(0);
}
