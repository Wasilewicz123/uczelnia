//Napisz uniwersalną funkcję swap() zamieniającą wartości dwóch zmiennych dowolnego typu oraz program,
//który sprawdzi jej działanie dla różnych typów zmiennych.
//Użyj odpowiedniego rzutowania wkaźników i typu (void*).
#include<iostream>
#include<cmath>
void cpy(void*dst, void*src, size_t n){
    char *cdst = (char *)dst;
    char *csrc = (char *)src;
    for(size_t i=0;i<n;++i){
        cdst[i]=csrc[i];

    }
}
void my_swap(void*a, void*b, size_t size){
    char*tmp=new char[size];
cpy(tmp,b,size);
cpy(b,a,size);
cpy(a,tmp,size);
delete[] tmp;
}
int main(){
float a=5.67, b=3.43;
std::cout<<a<<" "<<b<<" ";
my_swap(&a,&b,sizeof(b));
std::cout<<a<<" "<<b<<" ";
return 0;
}


