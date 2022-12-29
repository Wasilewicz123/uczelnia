// Napisz funkcję, która dostaje dwa argumenty:
// wskaźnik na stałą typu int i stały wskaźnik na zmienną typu int. 
// Funkcja powinna przepisać zawartość stałej wskazywanej przez pierwszy argument do zmiennej wskazywanej przez drugi argument. 
// Napisz program, który przetestuje działanie tej funkcji. 

#include<iostream>

int function(const int *ptr, int *const ptr1){
*ptr1=*ptr;
return *ptr1;
}

int main(){
const int n = 5;
int m = 4;
std::cout << function(&n,&m);
return 0;
}