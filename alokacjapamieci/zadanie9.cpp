//Napisz program, który wczytuje od użytkownika dwie liczby całkowite n i m,
//a następnie dynamicznie alokuje pamięć dla n-elementowej tablicy liczb całkowitych.
//W kolejnym kroku program powinien uzupełnić tablicę losowymi wartościami z przedziału <-50;50> i je posortować. 
//Na koniec program powinien znaleźć wszystkie pary liczb całkowitych,
//których suma jest równa liczbie m, wyświetlić je i podać ich ilość.
#include<iostream>
void bubblesort(int *arr, int n){
for(int i=0;i<n-1;i++){
    for(int j=0;j<n-i-1;j++){
        if(arr[j]>arr[j+1]){
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }
}
}
void print_arr(int *arr, int n) {
    for(int i = 0; i < n; ++i) 
        std::cout << arr[i] << " "; 
    std::cout << std::endl;
}
void function(int *arr, int n, int m){
    int count=0;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;++j){
            if(arr[i]+arr[j]==m){
                std::cout<<arr[i]<<","<<arr[j]<<" ";
                count++;
            }
        }
    } 
    std::cout<<std::endl;
    std::cout<<count<<" ";
}
int main(){
srand(time(0));
int n,m;
std::cin>>n>>m;
int *arr = new int[n];
for(int i=0;i<n;++i){
    arr[i]=rand() % (50 - (-50) + 1) + (-50);
}
bubblesort(arr,n);
print_arr(arr,n);
std::cout<<std::endl;
function(arr,n,m);
return 0;
}