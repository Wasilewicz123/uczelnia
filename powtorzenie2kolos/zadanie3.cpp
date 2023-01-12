#include<iostream>
#include<cmath>
#include<algorithm>
int cmp(const void*a, const void*b){
const int arg1= *(const int*)a;
const int arg2= *(const int*)b;
if(arg1>arg2) return 1;
if(arg1<arg2) return -1;
return 0;
}
void modify_array(int array[], int size,bool(*fun)(int x),void (*fun2)(int &x)){
    for(int i=0;i<size;i++){
        if(fun(array[i])==true) fun2(array[i]);
    }
}
bool condition(int x){
int i=0,counter=0; 
bool flag;
int help=abs(x);
while(help){
        help=help/10;
        counter++;
    }
int *y=new int[counter];
while(x){
    y[i]=x%10;
    x=x/10;
    i++;
}
qsort(y,counter,sizeof(int),cmp);
for(int i=0;i<counter;i++){
if(y[i]==y[i+1]){ 
flag=false; 
break;}
else flag=true;}
if(flag==true) return true;
if(flag==false) return false;
delete[] y;
return 0;
}
void action(int &x) {
    
      int result = 0;
      while (x > 0) {
        result *= 10;
        result += x % 10;
        x /= 10;
      }
      x=result;

    } 

int main(){
const int size=6;
int array[size]={101,567,456,345,223,566};
modify_array(array,size,condition,action);
for(int i=0;i<size;i++)
    std::cout<<array[i]<<" ";



    return 0;
}