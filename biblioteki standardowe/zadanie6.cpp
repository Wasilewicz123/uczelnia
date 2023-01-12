#include<iostream>
#include<algorithm>
#include<cstring>
#include<cstdio>
#include<cstdlib>



int cmp(const void* a, const void* b){
char arg1=*(const char*)a;
char arg2=*(const char*)b;
if(arg1<arg2) return -1;
if(arg1>arg2) return 1;

return 0;

}
int main(){
char string[]="vhgjkakhghdiak";
char string2[]="vhgjkakhghdiak";
std::sort(string,string+14);
qsort(string2,14,sizeof(char),cmp);
for(int i=0;string[i];i++) std::cout<<string[i];
std::cout<<std::endl;
for(int i=0;string2[i];i++) std::cout<<string2[i];
    return 0;
}  




