#include<iostream>
#include <algorithm>
int genesis (int x){return x++;}
void print(int x){ std::cout<<x<<" ";}
int main(){
int n,x;
std::cin>>n>>x;
float* v1= new float[n];
float* v2= new float[n];
std::generate(v1,v1+n,genesis);
std::generate(v2,v2+n,genesis);





delete[] v1;
delete[] v2;
    return 0;
}