#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void insertSort(int vetor[], int n)
{
    int key, j, trocas;
    trocas = 0;

    for (int i = 1; i < n; i++)
    {
        key = vetor[i];
        j = i - 1;

        while (j >= 0 && vetor[j] > key)
        {
            vetor[j + 1] = vetor[j];
            j = j - 1;
            trocas++;
        }
        vetor[j + 1] = key;
    }
}

void printInsertionSort(int vetor[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << vetor[i] << " ";
    }
    cout << endl;
}