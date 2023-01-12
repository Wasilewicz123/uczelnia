//Napisz program, 
//który wczyta od użytkownika liczbę całkowitą n,
//a następnie dynamicznie zaalokuje pamięć dla n elementowej tablicy liczb całkowitych. 
//Program powinien wypełnić tablicę dowolnymi wartościami,
//a następnie wyświetlić wszystkie elementy tej tablicy. Na końcu programu zwolnij zaalokowaną pamięć.
#include<iostream>
int main(){
int n;
int *arr;
std::cin >> n;
arr = new int[n];
for(int i=0;i<n;i++)
    arr[i]=i+1;
for(int i=0;i<n;i++){
    std::cout<<arr[i]<<" ";
}
delete[] arr;


    return 0;
}