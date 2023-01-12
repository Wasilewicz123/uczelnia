//Napisz funkcję print2d(),
//która wyświetli wartości automatycznej tablicy dwuwymiarowej,
//bez względu na wielkość tej tablicy. 
//W programie głównym stwórz przykładowe dwuwymiarowe tablice i wyświetl ich wartości za pomocą funkcji print2d(). 
//Skorzystaj z umiejętnego rzutowania wskaźników w celu przekazania tablicy do funkcji. 
//Jakich jeszcze parametrów będzie ta funkcja potrzebowała?
#include<iostream>
#include<cmath>
#include<ctime>
void print2d(void **array, int n,int m){
   
for(size_t i=0;i<n;i++){
    std::cout<<std::endl;
    for(size_t j=0;j<m;j++){
        std::cout<<newarray[i][j]<<"\t";
        if(j==m-1) std::cout<<std::endl;
    }
}
}
void fillArray(void **array,int n,int m){
  
for(int i=0;i<n;i++)
    for(int j=0;j<m;j++)
        newarray[i][j] = rand() % 11;

}
void changeType(void**array){

}  

int main(){
    srand(time(0));
    int n,m;
    std::cin>>n;
    std::cin>>m;
    
    float **array = new float*[n];
    for(int i=0;i<n;i++){
        array[i]=new float[m];
    }
    fillArray(array,n,m);
    print2d(array,n,n);
    for(int i=0;i<n;i++)
        delete[] array[i];
            delete[] array;
    return 0;
}

