//Napisz funkcję, która w parametrze przyjmuje tablicę liczb całkowitych.
//Funkcja powinna zwrócić element o największej liczbie bitów o wartości 1, jeśli w tablicy jest więcej liczb o takiej samej ilości bitów,
//funkcja powinna zwrócić tę, która wystąpiła w tablicy, jako ostatnia. Zilustruj działanie tej funkcji i wyświetli wynik zwrócony przez funkcję.
//PRZYKŁAD:
// IN: {1, 2, 3, 4, 5, 64}
// OUT: 5
#include<iostream>
int counter(int n){
    int count=0;
    for(int i=4*sizeof(n);i>=0;i--){
        if(n>>(4*sizeof(n)-i)&1==1) count++;
    }
    return count; 

}  
int function(int arr[]){
    int theBiggestOne;
    int result;
    theBiggestOne=counter(arr[0]);
    for(int i=1;i<6;i++){
        if(counter(arr[i])>=theBiggestOne){
            theBiggestOne=counter(arr[i]);
            result=arr[i];
        } 
       
    }
    
    return result;
}
int main(){
int array[6]={1,2,3,4,4,64};
std::cout<<function(array);
return 0;
}