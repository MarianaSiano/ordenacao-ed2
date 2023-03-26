#include <iostream>

#include "MergeSort.h"

using namespace std;

void merge(int vetor[], int const esq, int const meio, int const dir)
{
    int troca;
    troca = 0;

    auto const subVetorEsq = meio - esq + 1;
    auto const subVetorDir = dir - meio;

    auto *vetorEsq = new int[subVetorEsq];
    auto *vetorDir = new int[subVetorDir];

    for (auto i = 0; i < subVetorEsq; i++){
        vetorEsq[i] = vetor[esq + i];
    }
    
    for (auto j = 0; j < subVetorDir; j++){
        vetorDir[j] = vetor[meio + 1 + j];
    }

    auto indiceEsq = 0, indiceDir = 0;
    int indiceVetor = esq;

    while (indiceEsq < subVetorEsq && indiceDir < subVetorDir) {
        if (vetorEsq[indiceEsq] <= vetorDir[indiceDir]) {
            vetor[indiceVetor] = vetorEsq[indiceEsq];
            indiceEsq++;
        } else {
            vetor[indiceVetor] = vetorDir[indiceDir];
            indiceDir++;
        }
        indiceVetor++;
        troca++;
    }

    while (indiceEsq < subVetorEsq) {
        vetor[indiceVetor] = vetorEsq[indiceEsq];
        indiceEsq++;
        indiceVetor++;
        troca++;
    }

    while (indiceDir < subVetorDir) {
        vetor[indiceVetor] = vetorDir[indiceDir];
        indiceDir++;
        indiceVetor++;
        troca++;
    }

    cout << "Trocas Merge Sort => " << troca << endl;

    delete[] vetorEsq;
    delete[] vetorDir;
}

void mergeSort(int vetor[], int const comeco, int const fim)
{  
    if (comeco >= fim)
        return; // retorna recursivamente

    auto meio = comeco + (fim - comeco) / 2;
    mergeSort(vetor, comeco, meio);
    mergeSort(vetor, meio + 1, fim);
    merge(vetor, comeco, meio, fim);
}

void printMergeSort(int vetor[], int tam)
{
    for (auto i = 0; i < tam; i++){
        cout << vetor[i] << " ";
    }
    cout << endl;
}