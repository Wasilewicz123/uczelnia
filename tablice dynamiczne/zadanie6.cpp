/*Napisz funkcję, która obliczy (zwróci) iloczyn diadyczny dwóch wektorów o dowolnej ilości współrzędnych 
(https://pl.wikipedia.org/wiki/Iloczyn_diadyczny).
Wektory mają być reprezentowane za pomocą jednowymiarowych dynamicznie alokowanych tablic 
a macierz przez dynamicznie alokowaną tablicę dwuwymiarową. 
Jaką sygnaturę funkcji zaproponujesz?*/
#include<iostream>
#include<ctime>
void function(int *a, int *b, int **matrix, int size){
for(int i=0;i<size;i++)
    for(int j=0;j<size;j++)
        matrix[i][j]= a[i] * b[j];
}
void printArray(int **array, int size){
for(int i=0;i<size;i++){
    for(int j=0;j<size;j++){
        std::cout<<array[i][j]<<" ";
        }
          std::cout<<std::endl;  
    }
}           

int main(){
srand(time(NULL));
int size;
std::cin>>size;
int *a =new int[size];
int *b =new int[size];
for(int i=0;i<size;i++) a[i]=rand()%10;
for(int i=0;i<size;i++) b[i]=rand()%10;
int **matrix=new int*[size];
for(int i=0;i<size;i++)
    matrix[i]=new int[size];
function(a,b,matrix,size);
printArray(matrix,size);






for(int i=0;i<size;i++)
    delete[] matrix[i];
delete []matrix;
delete []a;
delete []b;

    return 0;
}

