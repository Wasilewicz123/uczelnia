#include<iostream>
#include <algorithm>
#include <numeric>
int global;
float f(){return global++;}
void print(int x){std::cout<<x<<" ";}
int main(){
int n;
int x;
std::cin>>n;
std::cin>>x;
global=x;;
float *v1= new float[n];
float *v2= new float[n];
std::generate(v1,v1+n,f);
global=x;
std::generate(v2,v2+n,f);
std::random_shuffle(v1,v1+n);
std::random_shuffle(v2,v2+n);
std::for_each(v1,v1+n,print);
std::cout<<std::endl;
std::for_each(v2,v2+n,print);
std::cout<<std::endl;
std::cout<<std::accumulate(v1,v1+n,0);
std::cout<<std::endl;
std::cout<<std::inner_product(v1,v1+n,v2,0);
delete[] v1;
delete[] v2;
return 0;
}