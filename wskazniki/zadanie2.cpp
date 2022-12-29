// Napisz program, w którym zdefiniujesz bezpośrednio po sobie kilka zmiennych typ:
//  (1) int, (2) float, (3) char, (4) char[7], (5) double. 
//  Sprawdź w jakiej kolejności te zmienne będą rzeczywiście zaalokowane w pamięci po uruchomieniu programu, 
// czy wszystkie zostaną zaalokowane w jednolitym bloku pamięci i ile bajtów będą łącznie zajmowały.
#include<iostream>


int main(){
 int a;
 float b;
 char c;
 char str[7]={6,45,3,12,7,87,4};
 double d;
 std::cout<<&a<<"\t"<<&b<<"\t"<<&c<<"\t"<<&str[0]<<"\t"<<&d;



    return 0;
}
