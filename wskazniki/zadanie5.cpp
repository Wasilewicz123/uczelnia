#include<iostream>

void function(int &a, int *b){
int temp;
temp=a;
a = (*b);
(*b)=temp;

}

int main(){
    int x=34;
    int y=5;
    function(x,&y);
    std::cout<<x<<std::endl;
    std::cout<<y<<std::endl;
    return 0;
}