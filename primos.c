#include <stdio.h>


int main(){

    int num,i,primo;
    
    printf("Digite um número:\n");
    scanf("%d", &num);
    

    primo = 1;
    for(i=2;i < num;i++){
        if(num % i == 0){
            primo = 0;
        }
    }
    
    if(primo == 1){
        printf("o número %d eh primo\n",num);
    }
    else{
        printf("o número %d não eh primo\n", num);
    }
    



return(0);
}
