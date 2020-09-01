#include <iostream>
#include <clocale>
#include <stdio.h>

using namespace std;

 void mostrar(int vet[], int m) {
   for(int i = 0; i<m; i++)
    cout << vet[i] << ",";
    cout << "]" << endl;
}
void insertionSort(int vet[], int m) {
   int chave, j;
   for(int i = 1; i<m; i++) {
      chave = vet[i];
      j = i;
      while(j > 0 && vet[j-1]>chave) {
         vet[j] = vet[j-1];
         j--;
      }
      vet[j] = chave;
   }
}
int main (){


    int n = 15;
   int vet[n] = {9 , 10 , -1, 3, 6, 2, 1, -3, 0, -2, 15, 8, -7, 0};

   cout << "Vetor antes: A = [";
   mostrar(vet, n);
    cout << endl;
   insertionSort(vet, n);

   cout << "Vetor usando o metodo de ordenacao Insertion Sort: A = [";
   mostrar(vet, n);

return 0;
}
