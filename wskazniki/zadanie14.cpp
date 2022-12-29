// Napisz funkcję, która przyjmuje jako argumenty wskaźnik na pierwszy element tablicy liczb całkowitych, 
// wskaźnik na za-ostatni element tej tablicy oraz referencję do zmiennej logicznej. 
// Funkcja powinna posortować tablicę w taki sposób, że wartości nieparzyste znajdą się w początkowej części tablicy,
// a parzyste w końcowej. Kolejność wartości wewnątrz tych grup jest dowolna. 
// Funkcja powinna zwrócić wskaźnik na komórkę tablicy, w której pojawi się pierwsza liczba parzysta.
// Zmiennej logicznej przekazanej przez referencję podanej w argumencie, należy przypisać prawdę,
// jeżeli funkcja dokonała w tablicy jakąkolwiek zmianę, a fałsz w przeciwnym przypadku. 
// W zadaniu wykorzystaj wskaźnikowy sposób indeksowania tablicy.
// Dla ułatwienia załóżmy, że w tablicy jest co najmniej jedna wartość parzysta i nieparzysta.
#include<iostream>
void printArr(int *begin, int *afterEnd){
    for(int *i=begin;i<afterEnd;++i)
        std::cout<<*i<<" ";
    std::cout<<std::endl;
    
}
void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int *f(int arr[], int n, bool &changed){
int *even = nullptr;
changed = false;
do{ 
    for(int i = 0; i<n-1;i++){
        if(*(arr+i)%2==0&&*(arr+i+1)%2==1){
            swap((arr+i), (arr+i+1));
            even=(arr+i+1);
            changed=true;
        }
    }
n--;
}
while(n>0);
return even;
}
int main(){
 bool c;
    int arr[7] = {1, 4, 3, 5, 2, 7, 8};
    int *even = f(arr, 7, c);
    printArr(arr, even);
    printArr(even, arr + 7);
    printArr(arr, arr + 7);



    return 0;
}