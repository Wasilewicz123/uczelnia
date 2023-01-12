#include<iostream>
#include<algorithm>
#include<cstdlib>
int comapreInt(const void* a, const void* b){
int arg1=*(const int*)a;
int arg2=*(const int*)b;
if(arg1<arg2) return -1;
if(arg1>arg2) return 1;

return 0;

}

int main(){
float arr1[10]={6,3,2,6,8,5,3,2,9,5};
int arr2[10]={6,3,2,6,8,5,3,2,9,5};
std::sort(arr2,arr2+10);
qsort(arr1,10,sizeof(int),comapreInt);
for(int i=0;i<10;i++) std::cout<<arr1[i]<<" ";
std::cout<<std::endl;
for(int i=0;i<10;i++) std::cout<<arr2[i]<<" ";
    return 0;
}