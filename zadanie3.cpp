//Napisz funkcję, 
//która przyjmuje w argumencie liczbę całkowitą (bez znaku, mniejszą niż 65536) 
//w postaci napisu. 
//Funkcja ma dokonać konwersji tego napisu do liczby całkowitej i zwrócić jej wartość.
//Zademonstruj użycie tej funkcji w funkcji głównej.
//PRZYKŁAD:
//IN: "1234"
//OUT: 1234
#include<iostream>

unsigned short int  function(char str[]){
    unsigned short int number=0;
    int x=-1; int j=1;
    for(int i=0;str[i];++i){
        x=x+1; 
    }
    while(x>-1){
    number= number + ((str[x]-'0')*j);
    x--;
    j=j*10;
    }
    return number;
}




int main(){
char str[]="65535"; //1,2,3,4,\0
std::cout<<function(str);
    return 0;
}