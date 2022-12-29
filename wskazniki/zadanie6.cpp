// Napisz funkcję, która przyjmuje w argumentach liczbę 4-bajtową całkowitą nieujemną word
//  oraz cztery wskaźniki na 1-bajtowe liczby całkowitą nieujemne b0,b1,b2,b3. 
//  Funkcja ma wpisać w argumenty wskazywane wskaźnikami b0..b3 wartości kolejnych bajtów z liczby word.
//  Zadanie zrealizuj za pomocą arytmetyki wskaźnikowej i odpowiedniego ich rzutowania. Przetestuj działanie funkcji.
#include<iostream>
typedef unsigned int uint;
typedef unsigned char uchar;
void function(uint word, uchar* b0, uchar* b1, uchar* b2, uchar* b3){
   
  
} 










int main(){
uint word=1900;
uchar a, b, c, d;
function(word,&a,&b,&c,&d);
std::cout<<a<<"\t"<<b<<"\t"<<c<<"\t"<<d;




    return 0;
}
