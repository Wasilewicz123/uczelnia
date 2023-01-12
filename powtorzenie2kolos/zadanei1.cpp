#include<iostream>
#include<cstdlib>
#include<ctime>
int help(const void*a, const void*b){
const int arg1=*(const int*)a;
const int arg2=*(const int*)b;
if(arg1<arg2) return 1;
if(arg1>arg2) return -1;
return 0;
}

void fun(int *arr, int n, int k, int *result){
int *copyArr= new int[n];
for(int i=0;i<n;i++) copyArr[i]=arr[i];
qsort(copyArr,n,sizeof(int),help);
int theBiggest=copyArr[0];
result[0]=copyArr[0];
int count=0;
int i=1;
int j=1;
while(count<3){
if(copyArr[i]<theBiggest){
result[j]=copyArr[i]; 
theBiggest=copyArr[i];
count++;
j++;
} 
if(theBiggest==copyArr[i]) i++;

}
delete[] copyArr;
}

int main(){
srand(time(NULL));
int n=12,k=4;
int *arr=new int[n];
int *result=new int[k];
for(int i=0;i<n;i++) arr[i]=rand()%10;
fun(arr,n,k,result);
for(int i=0;i<k;i++) std::cout<<result[i]<<" ";
std::cout<<std::endl;
for(int i=0;i<n;i++) std::cout<<arr[i]<<" ";
delete [] arr;
delete [] result;
return 0;
}