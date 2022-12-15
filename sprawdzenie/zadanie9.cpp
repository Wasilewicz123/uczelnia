//Napisz funkcję matRows(), która przyjmuje jako argumenty: jednowymiarową tablicę automatyczną liczb całkowitych mat, 
//liczby całkowite n, m. Tablicę mat należy zinterpretować jako tablicę dwuwymiarową o n wierszach i m kolumnach, 
//w której kolejne komórki ustawione są wierszami. Funkcja powinna zwrócić liczbę wierszy, w których liczby posortowane są rosnąco.
//PRZYKŁAD:
//IN n = 2, m = 3
//IN mat = [1, 6, 3, 5, 6, 7]
//OUT: 1
//bo: mat = | 1 6 3 | 
//          | 5 6 7 |
#include<iostream>
int matRows(int mat[],int n, int m){
int counter=0;
int index=0;
for(int i=0;i<n;i++){
    bool sorted=true;
    for(int j=0;j<m-1;j++){
        if(mat[index]>mat[index+1]){
            sorted=false;
        }
        index++;
}
index++;
if(sorted==true) counter++;
} return counter;
}
            
    
     
int main(){
int n=3;
int m=3;
int array[n*m]={1,3,3,2,3,7,6,7,8};
std::cout<<matRows(array,n,m);
return 0;
}

