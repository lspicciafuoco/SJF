#include <stdio.h>
#include <stdlib.h>
#define N 3
/*
 * 
 */

void ordina(int vet[], int n);

int main(int argc, char** argv) {
    int i;
    int vet[N];
    float accumulatore;
    float tempoMedio=0;
    
    printf("Inserisci %d processi\n",N);
    while(i < N){
        printf("Inserisci il tempo di esecuzione del %d° processo: ",i + 1);
        scanf("%d",&vet[i]);
        i++;
    }
   
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
 int  j, num;
    int v[N];
    int i=0;
   
   
    for(i = 1; i < N; i++) { 
        for(j = i; j > 0 && v[j-1] > num; j--) {
            v[j] = v[j-1];
        }
        v[j] = num;
    }
    
    printf("Algoritmo ordinato: \n");
    for(i = 0; i < N; i++) {
    printf("%d ", v[i]);
    }
    
}

