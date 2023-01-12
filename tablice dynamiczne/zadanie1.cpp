//Napisz program, 
//który wczytuje ze standardowego wejścia trzy liczby naturalne n, m i o, 
//a następnie alokuje pamięć dla trzywymiarowej tablicy nxmxo.
//Wypełnij tę tablicę dowolnymi wartościami a następnie usuń z pamięci
#include<iostream>
#include<ctime>
typedef unsigned int uint;

void fillArray(int***a,uint n,uint m,uint o){
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            for(int k=0;k<o;k++)
                a[i][j][k]=rand() % 11;
            
}
void printArray(int***a,uint n,uint m,uint o){
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            for(int k=0;k<o;k++)
               std::cout<<a[i][j][k]<<" ";
            
}



int main(){
    srand(time(0));
    unsigned int n,m,o;
    std::cin>>n>>m>>o;
    int  ***array = new int**[n];
    for (int i = 0; i < n; i++)
        {
        array[i]=new int*[m];
    
        for (int j = 0; j < m; j++)
            {
            array[i][j]=new int[o];
        }
    } 
    fillArray(array,n,m,o);
    printArray(array,n,m,o);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            delete[] array[i][j];
        }
        delete[] array[i];
    }
    delete[] array;
    return 0;
}