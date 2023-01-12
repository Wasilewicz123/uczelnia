//Napisz funkcję, która przyjmuje w argumentach: tablicę liczb zmiennoprzecinkowych arr1, 
//rozmiar tablicy arr1, tablicę liczb całkowitych arr2 oraz rozmiar tablicy arr2. 
//Wartości elementów w tablicy arr2 to indeksy dla tablicy arr1.
//Niech funkcja wyświetli wszystkie elementy tablicy arr1 o indeksach, 
//których wartości znajdują się w tablicy arr2. Jeżeli w arr1 nie ma odpowiedniego indeksu to wyświetla dla niego wartość NAN. 
//Napisz program, który dynamicznie zaalokuje pamięć dla obu tablic,
//a następnie arr1 wypełni dowolnymi wartościami, zaś wartości tablicy arr2 wczyta od użytkownika.
#include<iostream>
#include<cmath>
void function(float arr1[], int n, int arr2[], int m){
    for(int i=0;i<m;++i){
        if(arr2[i]>=0 && arr2[i]<n) 
        std::cout<<arr1[arr2[i]];
        else std::cout<<NAN;
    }
}
int main(){
float* arr1;
int* arr2;
int n,m;
std::cout<<"podaj rozmiar tablicy wartosci";
std::cin>>n;
std::cout<<"podaj rozmair tablicy indeksów";
std::cin>>m;
arr1=new float[n];
arr2=new int[m]; 
for(int i=0;i<n;i++){
    arr1[i]=i*i;
}
for(int i=0;i<m;++i){
    std::cin>>arr2[i];
}
function(arr1,n,arr2,m);



    return 0;
}