#include <iostream>

using namespace std;

void merge(int vetor[], int const esq, int const meio, int const dir)
{
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
    }

    while (indiceEsq < subVetorEsq) {
        vetor[indiceVetor] = vetorEsq[indiceEsq];
        indiceEsq++;
        indiceVetor++;
    }

    while (indiceDir < subVetorDir) {
        vetor[indiceVetor] = vetorDir[indiceDir];
        indiceDir++;
        indiceVetor++;
    }

    delete[] vetorEsq;
    delete[] vetorDir;
}