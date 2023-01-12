//Napisz funkcję, która wykona operację zmiany rozmiaru (realokacji) przekazanej w parametrze tablicy dynamicznej na nowy rozmiar. 
//Oprócz tablicy, przekaż do funkcji również stary_rozmiar i nowy_rozmiar.
//Taka operacja wymaga utworzenia nowej tablicy, skopiowania do niej elementów ze starej tablicy,
//usunięcia starej tablicy i odpowiedniego ustawienia wskaźnika na nową tablicę.
//W przypadku gdy nowy_rozmiar jest mniejszy niż stary_rozmiar funkcja przepisuje jedynie nowy_rozmiar elementów, 
//w przeciwnym razie przepisuje wszystkie elementy a nadmiarowe elementy zeruje.
//Zrealizuj tę funkcję w dwóch wersjach: (1) nowa tablica jest zwracana przez funkcję, (2) nowa tablica jest realokowana za pomocą parametru funkcji.
#include<iostream>

int *fun(int oldArray[], int oldSize, int newSize){
int *newArray=new int[newSize];
if(newSize>oldSize){
    for(int i=0;i<oldSize;i++){
        newArray[i]=oldArray[i];
    }
    for(int j=oldSize;j<newSize;j++){
        newArray[j]=0;
    }
} 
if(oldSize>newSize){
    for(int i=0;i<newSize;i++){
        newArray[i]=oldArray[i];
    }
}
return newArray;
}
void printArray(int *a,int n){
for(int i=0;i<n;i++) std::cout<<a[i]<<" ";
}
int main(){
int oldSize=10;
int newSize;
std::cin>>newSize;
int*oldArray = new int[oldSize]{1,2,3,4,5,6,7,8,9,10};
int*newArray=fun(oldArray,oldSize,newSize);
printArray(newArray,newSize);
delete[] oldArray;
delete[] newArray;
return 0;
}
