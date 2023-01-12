/*Napisz funkcję, która przyjmie jako argumenty dwa napisy - przeszukiwany i poszukiwany. 
Jeżeli w napisie przeszukiwanym znajduje się napis będący zgodny z napisem poszukiwanym,
 funkcja powinna zwrócić wskaźnik na indeks pierwszego znaku odnalezionego podnapisu. 
 W przeciwnym razie funkcja powinna zwrócić NULL.*/
#include<iostream>


char  *function(char str1[], char str2[]){
bool found;
char*ptr=nullptr;
for(int i=0;str1[i];i++){
   found=true;
   for(int j=0; str2[j] && str1[i+j];j++){
      if(str1[i+j]!=str2[j]){
         found=false;
         break;
      }
     }
   if(found) ptr=str2;
   }
 return ptr;
 return nullptr;
}




 int main(){
char str1[]="sram na klate komus"; //przeszukiwany
char str2[]="komus"; //poszukiwany
char *found=function(str1,str2);
if(found) std::cout<<found<<",index "<<found-str1<<std::endl;
else std::cout<<"ni ma";
    return 0;
 }
// #include <iostream>

// char *search(char str[], char str1[]) {
//     bool found;
//     for(int i = 0; str[i]; ++i) {
//         found = true;
//         for(int j = 0; str1[j] && str[i + j]; ++j)
//             if(str[i + j] != str1[j]) {
//                 found = false;
//                 break;
//             }
//         if(found) return str + i;
//     } 
// return nullptr;
// }

// int main() {
//     char str[] = "sram na kalte komus", str1[] = "komus";
//     char *found = search(str, str1);

//     if(found) 
//         std::cout << found << " , index:" << found - str << std::endl;
//     else 
//         std::cout << "not found\n";

//     return 0;
// }