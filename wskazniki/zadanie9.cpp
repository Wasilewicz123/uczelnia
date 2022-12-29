// Napisz funkcję, która przyjmuje jako argument wskaźnik na początek i koniec tablicy liczb całkowitych.
//  Funkcja powinna wyświetlić wszystkie elementy tej tablicy. 
// Przetestuj działanie tej funkcji. Nie korzystaj z dostępu do elementów tablicy operatorem [ ].
#include<iostream>
#define N 10
void function(int *begin, int *end){
    for(int *it = begin; it <end; ++it){
        std::cout<<*it<<"\t";
    }
}

int main(){
int arr[N]={5,7,45,7,3,7,8,8,0,4};
function(arr,arr+10);





    return 0;
}