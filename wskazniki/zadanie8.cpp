// Napisz funkcję otrzymującą jako argumenty wskaźniki do dwóch zmiennych typu int, 
// która zwraca jako wartość wskaźnik na zmienną przechowującą mniejszą z liczb wskazywanych przez argumenty.
#include<iostream>

 int function(int* n, int* m){
    if(*n > *m) return  *n;
    else return *m;


 } 




int main(){
int n, m;
std::cin >> n >> m;
std::cout << function( &n, &m);



    return 0;
}