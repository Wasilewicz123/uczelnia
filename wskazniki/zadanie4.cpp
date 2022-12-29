#include<iostream>

void f(int &a, int &b, int &c){
    c=  a + b;
}

int main(){
    int a=14;
    int b=5;
    int c=5;
    
f(a,b,c);
std::cout << c;





return 0;
}