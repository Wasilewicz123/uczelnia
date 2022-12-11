//Napisz funkcję, która przyjmuje w argumentach: 
//(1) tablicę liczb zmiennoprzecinkowych arr1,
//(2) liczbę całkowitą n - rozmiar tablicy arr1, 
//(3) tablicę liczb całkowitych arr2 oraz 
//(4) liczbę całkowitą m - rozmiar tablicy arr2. Wartości elementów w tablicy arr2 to indeksy dla tablicy arr1. 
//Niech funkcja wyświetli wszystkie elementy tablicy arr1 o indeksach, których wartości znajdują się w tablicy arr2.
//Jeżeli w arr1 nie ma odpowiedniego indeksu to wyświetla dla niego wartość NAN. Zademonstruj użycie tej funkcji w funkcji głównej.
//PRZYKŁAD:
//IN arr1: 2.3, 3.1, 0.5, 3.4, 5.2
//IN arr2: 4, 1, 3, 9, 1
//OUT: [4]=5.2, [1]=3.1, [3]=3.4, [9]=NAN, [1]=3.1
#include<iostream>
#include<cmath>
#define N 5
#define M 5
void function(float arr1[], int n, int arr2[], int m){
for(int i=0;i<m;i++){
    if(!(arr2[i]>n || arr2[i]<0))
        std::cout<<"["<<arr2[i]<<"]"<<"="<<arr1[arr2[i]]<<", ";
    
    else
        std::cout<<"["<<arr2[i]<<"]"<<"="<<NAN<<", ";

}
}
int main(){
float arr1[N]={2.3, 3.1, 0.5, 3.4, 5.2};
int arr2[M]={4, 1, 3, 9, 1};
function(arr1,N,arr2,M);
return 0;
}