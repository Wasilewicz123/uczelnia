 //Napisz program, który wydrukuje wartość oraz adres w pamięci zmiennych typu: 
// int, wskaźnika na typ int niezainicjalizowanego oraz ustawionego na konkretną zmienną. 
// Wykorzystaj do tego celu funkcję printf() oraz obiekt std::cout.

#include<iostream>
#include<cstdio>



int main(){
int a=10;
int *ptr=&a;
int *n = &a;

printf("wartosc typu int = %d  , adres typu int = %p ,wartosc wskaznika int = %d, adres wskaznika ustawionego na adres zmiennej a = %p", a, &a, *ptr, &ptr );
std::cout << std::endl;
std::cout << "wartosc niezinicjaliozwanego wskaznika :" << *n << "adres niezainicjaliowanego wskanicka:" << &n;


    return 0;
}