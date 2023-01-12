
#include<cstdio>

int main(){
char str[101]={0};
char reverseStr[101]={0};
char *s = str;
char *r = reverseStr;
scanf("%101s",str);
int len=0;
while(*(s++)!='\0') len++;
s--;
while(len>=0){ *(r++)=*(--s); len--;}
*r='\0';
printf("Original: %s\n", str);
printf("Reverse: %s\n", reverseStr);
    return 0;
}
