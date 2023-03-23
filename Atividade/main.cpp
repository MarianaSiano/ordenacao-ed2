#include <iostream>
#include <bits/stdc++.h>

#include "BubbleSort.h"
#include "SelectionSort.h"

using namespace std;

int main()
{
    cout << "Ordenacao de Vetores" << endl;
    cout << endl;
    
    int n;
    cout << "Tamanho do vetor => ";
    cin >> n;
    int vetor[n];

    cout << "Bubble Sort" << endl;
    cout << endl;

    for(int i = 0; i < n; i++){
        cout << "vetor[" << i << "] => ";
        cin >> vetor[i];
    }

    bubbleSort(vetor, n);
    printBubbleSort(vetor, n);
    cout << endl;
    cout << "Terminou o Bubble Sort" << endl;
    cout << endl;

    cout << "Selection Sort" << endl;
    cout << endl;

    selectionSort(vetor, n);
    printSelectSort(vetor, n);

    cout << "Terminou o Selection Sort" << endl;
    cout << endl;

    return 0;
}