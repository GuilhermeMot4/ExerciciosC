#include <stdio.h>

int main(){


    int n,i,j,cont,mult_i,mult_j;
    scanf("%d",&n);
    scanf("%d %d",&i,&j);
    
    mult_i = 0;
    mult_j = 0;      
        
    cont = 0;
    while(cont < n){
        if (mult_i == mult_j){
            printf("%d", mult_i);
            mult_i = mult_i + i;
            mult_j = mult_j + j;
        }
        else if (mult_i < mult_j){
            printf("%d",mult_i);
            mult_i = mult_i + i;
        }
        else{
            printf("%d", mult_j);
            mult_j = mult_j + j;
        }
        printf(" ");
        cont++;
    }

return(0);
}
