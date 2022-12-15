//Zaprojektuj i zdefiniuj funkcję dyadic(),
//która oblicza i zwraca iloczyn diadyczny dwóch wektorów 3-elementowych przekazanych w argumentach.
//Do reprezentacji wektorów i macierzy użyj tablic automatycznych. W funkcji głównej pokaż użycie tej funkcji. 
//Iloczyn diadyczny dwóch wektorów n-wymiarowych daje w wyniku macierz nxn-wymiarową
//(zob. https://pl.wikipedia.org/wiki/Iloczyn_diadyczny)
#include<iostream>

void dyadic(int v1[],int v2[],int matrix[5][5]){
for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
       matrix[i][j]=v1[i]*v2[j];
       
    }
}
}

int main(){
int n=5; 
int v1[n]={1,2,3,4,5};
int v2[n]={0,3,1,5,6};
int matrix[5][5];
dyadic(v1,v2,matrix);
for(int i=0;i<n;++i){
    for(int j=0;j<n;j++){
        if(j==0) std::cout<<std::endl;
        std::cout<<matrix[i][j]<<" ";
    }
}

    return 0;
}