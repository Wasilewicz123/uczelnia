//Napisz program, który wczytuje od użytkownika liczbę całkowitą n 
//i dynamicznie alokuje pamięć dla n-elementowej tablicy liczb zmiennoprzecinkowych.
//Napisz funkcję rand_gen(), która uzupełni tą tablicę dowolnymi wartościami oraz funkcję seq(),
//która przyjmuje rozmiar tablicy oraz tablicę liczb zmiennoprzecinkowych. 
//Funkcja seq() ma wyświetlić na standardowym wyjściu kolejne wyrazy ciągu od 1 do n zdefiniowanego wzorem:
//F0 = 0
//Fn = (-1)^n * arr[n-1]+Fn-1, n>0
#include<iostream>
#include<cstdlib>
#include<cmath>
void rand_gen(float *arr, int n){
for(int i=0;i<n;++i){
    arr[i]=rand()%101;
}}
void seq(int n, float *arr){
float a = 0.f;
for(int i=1;i<=n;++i){
    a+=pow(-1,i) * arr[i-1];
    std::cout<<a<<std::endl;
}
}
int main(){

int n;
std::cin>>n;
float *arr;
arr =new float[n];
rand_gen(arr,n);
seq(n,arr);
delete [] arr;
return 0;
}