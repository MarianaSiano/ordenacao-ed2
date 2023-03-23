#include <iostream>
#include <bits/stdc++.h>

#include "BubbleSort.h"

using namespace std;

int main()
{
    cout << "Bubble Sort" << endl;
    cout << endl;

    int n;
    cout << "Tamanho do vetor => ";
    cin >> n;

    int vetor[n];
    for(int i = 0; i < n; i++){
        cout << "vetor[" << i << "] => ";
        cin >> vetor[i];
    }

    bubbleSort(vetor, n);
    printVetor(vetor, n);
    cout << endl;
    cout << "Terminou o Bubble Sort" << endl;
    cout << endl;

    return 0;
}