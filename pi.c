#include <stdio.h>
#include <math.h>

int main(){


    int i;
    float pi;    

   pi = 0;
   for(i=0;i<10000;i++){
        pi += pow(-1,i) / (2*i+1);
    }
    pi *= 4;
    printf("%f",pi);

    
     

return(0);
}
