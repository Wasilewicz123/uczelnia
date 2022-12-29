// Napisz funkcję, która przyjmuje jako argumenty wskaźniki do trzech zmiennych typu int. 
// Funkcja powinna do trzeciego argumentu zapisać sumę wartości z liczb wskazywanych przez dwa poprzednie argumenty.
#include<iostream>

void f(int *a, int *b, int *c){
    (*c)=  *a + *b;
}

int main(){
    int x=10;
    int y=5;
    int z=5;
    
f(&x,&y,&z);
std::cout << z;





return 0;
}

