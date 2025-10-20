#include <stdio.h>
#define L 4
#define C 3
int main(){
int i, j, matriz[L][C], Soma[C];
   for(int i = 0; i < L;i++){
    for(int j = 0; j < C; j++){
        if(i==j){
            matriz[i][j]= 0;
        } else{
            matriz[i][j]=0;
        }
    }

   }
 printf("\n\n\n\n");
 for(int i = 1; i < L;i++){
    printf("%i ", i);
    for(int j = 0; j < C; j++){
        Soma[j] = Soma[j]+(matriz[i][j]);
        printf("%i ",matriz[i][j]);
    }
    printf("\n");
 } 


return 0;

}