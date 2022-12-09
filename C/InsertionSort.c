//InsertionSort em C utilizando um vetor de 10 números aleatórios como teste
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#define TAM 10

void preencher(int v[], int n);
void mostrar(int v[], int n);
void ordenar(int v[], int n);

int main(int argc, char **argv){
    int v[TAM];
    preencher(v, TAM);
    printf("%s\n", "Antes de ordenar:"); 
    mostrar(v, TAM);
    ordenar(v, TAM);
    printf("%s\n", "Depois de ordenar:");
    mostrar(v, TAM);
    return 0;
}

void preencher(int v[], int n){
    int i;
    srand(time(NULL));
    for(i=0; i<n; i++){
        v[i] = rand() % 100;
    }
}

void mostrar(int v[], int n){
    int i;
    for(i=0; i<n; i++){
        printf("%02d ", v[i]);
    }
    printf("\n");
}

void ordenar(int v[], int n){
    int i, j, k;
    for(i=1; i<n; i++){
        k = v[i];
        j = i-1;
        while(j>=0 && v[j] > k){
            v[j+1] = v[j];
            j -= 1;
        }
        v[j+1] = k;
    }
}
