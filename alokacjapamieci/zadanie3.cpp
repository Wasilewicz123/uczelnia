//Napisz program, który wczyta od użytkownika nieujemną liczbę całkowitą n, 
//a następnie dynamicznie zaalokuje pamięć dla n elementowej tablicy liczb rzeczywistych. 
//Program powinien wypełnić tablicę zerami i wyświetlić wszystkie elementy tej tablicy.
//Następnie program powinien zmienić rozmiar tablicy na 10 i wypełnić ją jedynkami.
#include<iostream>
int main(){
unsigned int n;
std::cin>>n;
float *arr;
arr=new float[n];
for(int i=0;i<n;i++){
    arr[i]=0;
}
for(int i=0;i<n;i++){
    std::cout<<arr[i]<<" ";
}
delete[] arr;
std::cout << "\t";
n=10;
arr=new float[n];
for(int i=0;i<n;++i){
    arr[i]=1;
}
for(int i=0;i<n;++i){
    std::cout<<arr[i]<<" ";
}
 return 0;
}