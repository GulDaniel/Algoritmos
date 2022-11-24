//BubbleSort em C utilizando um vetor de 10 números aleatórios como teste
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <stdbool.h>

#define TAM 10

void preencher(int v[], int n);
void mostrar(int v[], int n);
void trocar(int *x, int *y);
void ordenar(int v[], int n);

int main(int argc, char **argv){
    int v[TAM];
    preencher(v, TAM);
    printf("Antes de ordenar:\n"); 
    mostrar(v, TAM);
    ordenar(v, TAM);
    printf("Depois de ordenar:\n");
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

void trocar(int *x, int *y){
    int z;
    z = *x;
    *x = *y;
    *y = z;
    }
    
void ordenar(int v[], int n){
    int i, j;
    bool swap;
        for(i=0; i<n-1; i++){
            swap = false;
        for(j=0; j<n-i-1; j++){
            if(v[j] > v[j+1]){
                trocar(&v[j], &v[j+1]);
                swap = true;
                }
            }
    if(swap == false){
        break;
    }
    }
}

