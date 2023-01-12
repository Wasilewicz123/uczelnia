//Napisz funkcję,
//która dostaje jako argumenty dwuwymiarową tablicę tablic o elementach typu int oraz jej wymiary, 
//i zmienia kolejność wierszy w tablicy w taki sposób, że wiersz pierwszy ma się znaleźć na miejscu drugiego, 
//wiersz drugi ma się znaleźć na miejscu trzeciego itd., 
//natomiast ostatni wiersz ma się znaleźć na miejscu pierwszego (przyjmujemy, że elementy w wierszu są umieszczone w pamięci obok siebie).
#include <iostream>
#include <ctime>

void fillArray(int ** array, int a, int b){
for(int i=0;i<a;i++){
    
    for(int j=0;j<b;j++){
        array[i][j]=rand()%10;
    }
    
}
}

void printArray(int ** array, int a, int b){
for(int i=0;i<a;i++){
    for(int j=0;j<b;j++){
        std::cout<<array[i][j]<<" ";
    }
    std::cout<<std::endl;
}
}


void function(int **array, int a/*wiersz*/, int b/*kolumna*/){
int**newArr=new int*[a];
    for(int i=0;i<a;i++)
        newArr[i]=new int[i];
for(int i=0;i<a;i++)
    for(int j=0;j<b;j++)
        newArr[i][j]=array[i][j];
for(int i=0;i<b;i++)
    array[0][i]=newArr[a-1][i];
for(int i=0;i<a-1;i++)
    for(int j=0;j<b;j++)
        array[i+1][j]=newArr[i][j];
for(int i  = 0;i<a;i++){
        delete[]  newArr[i];
    }
    delete[] newArr;



}



int main(){
srand(time(NULL));
int a,b;
std::cin>>a>>b;
int**array = new int*[a];
for(int i=0;i<a;i++){
    array[i]=new int[b];
}
fillArray(array,a,b);
printArray(array,a,b);
std::cout<<std::endl;
function(array,a,b);
printArray(array,a,b);
for(int i=0;i<a;i++)
    delete[] array[i];
delete[] array;
    return 0;
}