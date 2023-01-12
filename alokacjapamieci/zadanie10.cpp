//Napisz program, który wczytuje od użytkownika trzy liczby całkowite n, m, o, a następnie dynamicznie alokuje pamięć dla n-elementowej, 
//m-elementowej i o-elementowej tablicy liczb całkowitych. W kolejnym kroku program powinien uzupełnić tablice losowymi wartościami z przedziału <0;5> i je posortować.
//Na koniec z tak posotowanych tablic algorytm powinien wypisać elementy powtarzające się we wszystkich tablicach.
#include<iostream>
#include<ctime>



void fillArr(int *array, int size){
    for(int i=0;i<size;++i){
        array[i]=rand()%6;                          //max+1=6; bc: max=5;
    }
}
void bubbleSort(int *arr, int n) {
    for(int i = 0; i < n - 1; ++i)
        for(int j = 0; j < n - i - 1; ++j)
            if(arr[j] > arr[j + 1])
                std::swap(arr[j], arr[j + 1]);
}
void function(int *a1,int size1, int*a2,int size2,  int*a3, int size3){
    int firstarray=0, secondarray=0,thirdarray=0;
    while(firstarray<size1 && secondarray<size2 && thirdarray<size3){
        if(a1[firstarray]==a2[secondarray]&&a2[secondarray]==a3[thirdarray]){
            std::cout<<a2[secondarray]<<" ";
            firstarray++;secondarray++;thirdarray++;}
        else if(a1[firstarray]<a2[secondarray]){
            firstarray++;
        }
        else if(a2[secondarray]<a3[thirdarray]){
            secondarray++;
        }
        else {
            thirdarray++;
        }

        
    }
}

int main(){
    srand(time(0));
int n,m,o;
std::cin>>n>>m>>o;
int *arr1=new int[n];
int *arr2=new int[m];
int *arr3=new int[o];
fillArr(arr1, n);
fillArr(arr2, m);
fillArr(arr3, o);
bubbleSort(arr1, n);
bubbleSort(arr2, m);
bubbleSort(arr3, o);
function(arr1,n,arr2,m,arr3,o);
delete[] arr1;
arr1=nullptr;
delete[] arr2;
arr2=nullptr;
delete[] arr3;
arr3=nullptr;

    return 0;
}
