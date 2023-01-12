#include<iostream>
#include<algorithm>
void print(float x){std::cout<<x<<" ";}
int main(){
float a[17]={12,3,34,54,6,76,4,3,45,4,76,44,34,23,56567,32,23};
std::for_each(a,a+17,print);
return 0;
}