#include <iostream>
#include <bits/stdc++.h>

#include "BubbleSort.h"

using namespace std;

void bubbleSort(int vetor[], int n)
{
    int trocas;
    trocas = 0;
    
    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - i - 1; j++){
            if(vetor[j] > vetor[j + 1]){
                int aux = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = aux;
                trocas++;
            }
        }
    }
    cout << "Numero de trocas => " << trocas << endl;
}

void printVetor(int vetor[], int n)
{
    for(int i = 0; i < n; i++){
        cout << vetor[i] << " ";
    }
    cout << endl;
}