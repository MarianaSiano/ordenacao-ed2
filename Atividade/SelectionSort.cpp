#include <iostream>
#include <bits/stdc++.h>

#include "SelectionSort.h"

using namespace std;

void swap(int *xp, int *yp) {
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void selectionSort(int vetor[], int n) {
    int i, j, menorElemento, trocas;
    trocas = 0;

    for (i = 0; i < n-1; i++) {
        menorElemento = i;
        for (j = i+1; j < n; j++)
            if (vetor[j] < vetor[menorElemento])
                menorElemento = j;

        swap(&vetor[menorElemento], &vetor[i]);
        trocas++;
    }
    cout << "Numero de trocas Select Sort => " << trocas << endl;
}
void printSelectSort(int vetor[], int n)
{
    for(int i = 0; i < n; i++){
        cout << vetor[i] << " ";
    }
    cout << endl;
}
