#include<iostream>
#include<algorithm>
#include<cstdio>
bool condition(char x){
if(x>='a' && x<='z') return true;
return false;
}
void print(char x){std::cout<<x<<" ";}
int main(){
char str[8];
char result[8];
scanf("%100s",str);
std::fill(result,result+8,'-');
std::copy_if(str,str+8,result,condition);
std::for_each(result,result+8,print);
return 0;
}