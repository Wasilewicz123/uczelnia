//Napisz funkcję, która zrealizuje operację mnożenia dwóch macierzy o rozmiarze 3x3 przekazanych w argumencie. 
//Macierze mają być reprezentowane przez tablice jednowymiarowe 9-elementowe.
//Wewnątrz funkcji nie korzystaj z dostępu do elementów tablicy operatorem [ ]. 
//Jaką deklarację funkcji zaproponujesz żeby zrealizować to zadanie?
#include<iostream>

void matrixCalc( int *arr1, int *arr2, int *arr3){
int k=0;
for(int i=0;i<9;i++){
    *(arr3+i)= (*(arr1+i+k)) * (*(arr2+i)) + (*(arr1+i+1))* (*(arr2+i+3))+ (*(arr1+i+2))* (*(arr2+i+6));
   }
   
// arr3[0]=  arr1[i] * arr2[i] + arr1[i+1]*arr2[i+3]+arr1[i+2]*arr2[i+6];
// arr3[1]= arr1[i] * arr2[i+1] + arr1[i+1]*arr2[i+4]+arr1[i+2]*arr2[i+7];
// arr3[2]= arr1[i] * arr2[i+2] + arr1[i+1]*arr2[i+5]+arr1[i+2]*arr2[i+8];
// arr3[3]= arr1[i+3] * arr2[i] + arr1[i+4]*arr2[i+3]+arr1[i+5]*arr2[i+6];
// arr3[4]= arr1[i+3] * arr2[i+1] + arr1[i+4]*arr2[i+4]+arr1[i+5]*arr2[i+7];
// arr3[5]= arr1[i+3] * arr2[i+2] + arr1[i+4]*arr2[i+5]+arr1[i+5]*arr2[i+8];
// arr3[6]= arr1[i+6] * arr2[i] + arr1[i+7]*arr2[i+3]+arr1[i+8]*arr2[i+6];
// arr3[7]= arr1[i+6] * arr2[i+1] + arr1[i+7]*arr2[i+4]+arr1[i+8]*arr2[i+7];
// arr3[8]= arr1[i+6] * arr2[i+2] + arr1[i+7]*arr2[i+5]+arr1[i+8]*arr2[i+8];
}


int main(){
int a[9]={1,4,2,2,5,1,3,3,3};
int b[9]={4,3,5,5,2,4,3,2,3};
int dstMatrix[9]={};
matrixCalc(a,b,dstMatrix);
for(int i=0;i<9;i++)
    std::cout<<*(dstMatrix+i)<<" ";
return 0;
}