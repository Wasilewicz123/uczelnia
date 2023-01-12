#include<iostream>
char *find_substring(char str[],char str2[]){
char*ptr=nullptr;
bool found;
for(int i=0;str[i];i++){
   found=true;
   for(int j=0; str2[j] && str[i+j];j++){
      if(str[i+j]!=str2[j]){
         found=false;
         break;
      }
        
    }
  if(found) {ptr=str2; break;}
}
return ptr;
return nullptr;
}

int main(){
char str[]="jestem zolnierzem bialym cwelem";
char str2[]="zolnierzem";
std::cout<<*find_substring(str,str2);
    return 0;
 }