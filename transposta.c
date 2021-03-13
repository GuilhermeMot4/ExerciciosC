#include <stdio.h>

int main(){

    int l,c,i,j,aux,matriz[100][100];
    
    scanf("%d %d", &l,&c);
    for(i=0;i<l;i++){
        for(j=0;j<c;j++){
            scanf("%d", &matriz[i][j]);
        }
        
    }

    printf("Matriz:\n");
    for(i=0;i<l;i++){
        for(j=0;j<c;j++){
            printf("%d", matriz[i][j]);    
        }
        printf("\n");
    }

    for (i = 0; i < l; i++) {
        for (j = i+1; j < c; j++) {
            if (j != i) {
               aux = matriz[i][j];
               matriz[i][j] = matriz[j][i];
               matriz[j][i] = aux;
            }
      }
    }

    printf("Transposta:\n");
    for(i=0;i<c;i++){
        for(j=0;j<l;j++){
            printf("%d", matriz[i][j]);    
        }
        printf("\n");
    }

    
return(0);
}
