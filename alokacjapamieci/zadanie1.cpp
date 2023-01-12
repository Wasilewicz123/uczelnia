//Napisz funkcję, 
//która przyjmuje jako argumenty wskaźniki do dwóch zmiennych typu int. 
//Funkcja powinna zwrócić wskaźnik do mniejszej wartości z liczb wskazywanych przez argumenty, 
//jeśli argumenty mają taką samą wartość funkcja powinna zwracać wskaźnik na pierwszy argument. 
#include<iostream>
int *function(int *a, int *b){
if(*a>*b) return a;
if(*b>*a) return b;
if(*a==*b) return a;
}
int main(){
int a, b;
std::cin>>a>>b;
std::cout<<function(&a,&b);
return 0;
}