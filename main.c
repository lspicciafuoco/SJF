#include <stdio.h>
#include <stdlib.h>
#define N 4
/*
 * 
 */

void ordina(int vet[], int n);

int main(int argc, char** argv) {
    int i=0;
    int vet[N];
    float accumulatore;
    float tempoMedio=0;
    
    printf("Inserisci %d processi\n",N);
    while(i < N){
        printf("Inserisci il tempo di esecuzione del %d° processo: ",i + 1);
        scanf("%d",&vet[i]);
        i++;
    }
   
    ordina(vet, N);
    
            i = 1;
            while(i < N){
                tempoMedio = tempoMedio + vet[i-1]; 
                accumulatore = accumulatore + tempoMedio;   
                i++;
            }
            tempoMedio = accumulatore / N;
    printf("Il tempo medio di attesa e' : %f",tempoMedio);
    
    return (EXIT_SUCCESS);
}

void ordina(int vet[], int n){ 
  int i,j,scambio;
    
    for(i=0;i<n-1;i++){
        
        for(j = 0; j < (n - 1 - i); j++){
            if(vet[j]>vet[j+1]){
                
        scambio=vet[j];
        vet[j]=vet[j+1];
        vet[j+1]=scambio;
            }
        }
    }
}

