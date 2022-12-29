// Napisz funkcję, która dostaje jako argument wskaźnik do tablicy typu int 
// oraz rozmiar tablicy i odwraca kolejność elementów w tablicy. 
// Nie korzystaj z dostępu do elementów tablicy operatorem [ ].

#include<iostream>
#define N 10
void function(int *array, int n){
for(int i=n-1;i>=0;--i)
    std::cout<<*(array+i)<<"\t";
}




int main(){
int array[N]={1,2,3,4,5,6,7,8,9,10};
function(array, N);
    return 0;
}