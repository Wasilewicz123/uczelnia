#include<iostream>

int alfabetic(char a[], char b[]){
if(a[0]==b[0]) return 0;
if(a[0]>b[0]) return 1;
if(a[0]<b[0]) return -1;
return 0;
}

int main(){
char a[]="jebane gowno";
char b[]="analfabeta";
std::cout<<alfabetic(a,b);
    return 0;
}