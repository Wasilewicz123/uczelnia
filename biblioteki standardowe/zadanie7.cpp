#include<cstdio>
#include<cstdlib>
#include<iostream>
int main(){
char str[10];
char *end=nullptr;
scanf("%10s",str);
int value=strtol(str,&end,10)+10;
std::cout<<std::to_string(value)<<std::endl;;
return 0;
}