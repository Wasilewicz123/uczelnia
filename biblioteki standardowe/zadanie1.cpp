#include<iostream>


float add(float a, float b){
    return a+b;
}
float sub(float a, float b){
    return a-b;
}
float mul(float a, float b){
    return a*b;
}
float div(float a, float b){
    return a/b;
}



int main(){
float a,b;
unsigned int z;
float (*fun[4])(float, float) = {add,sub,mul,div};
std::cin>>a>>b>>z;
std::cout<<fun[z](a,b)<<std::endl;

    return 0;
}