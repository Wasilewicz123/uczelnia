#include<iostream>
#include<ctime>
#include<iomanip>
int **add(int** matrix,int n, int** matrix2){
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            matrix[i][j]=matrix[i][j]+matrix2[i][j];
return matrix;
}
int **sub(int** matrix,int n, int** matrix2){
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            matrix[i][j]=matrix[i][j]-matrix2[i][j];
return matrix;
}
void fill(int n, int** matrix){
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            matrix[i][j]=rand()%10;
}
int mat_operation(int**matrix,int n, int** matrix2, int **fun(int**,int,int**)){
 matrix=fun(matrix,n,matrix2);

return **matrix;
}

int main(){
srand(time(NULL));
int n,x;
std::cin>>n;
std::cout<<std::endl;
// int(**mat_operation)(int**,int,int**);
int **matrix = new int*[n];
for(int i=0;i<n;i++) matrix[i] = new int [n];
int**matrix2= new int*[n];
for(int i=0;i<n;i++) matrix2[i]= new int[n];
fill(n,matrix);
fill(n,matrix2);
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
         std::cout<<std::setw(3)<<matrix[i][j]<<std::setw(3);
    }
    std::cout<<std::endl; 
}
    
std::cout<<std::endl;
for(int i=0;i<n;i++){
    std::cout<<std::endl;
     for(int j=0;j<n;j++){
          std::cout<<matrix2[i][j]<<std::setw(3);
     }
      
}
   
std::cout<<std::endl;
std::cout<<"0 if u want to sub , 1 if u want to add\t";
std::cin>>x;
if(x==0) mat_operation(matrix,n,matrix2,sub);
if(x==1) mat_operation(matrix,n,matrix2,add);



// if(x==0) (sub)(matrix,n,matrix2);
// if(x==1) (add)(matrix,n,matrix2);
for(int i=0;i<n;i++){
    std::cout<<std::endl;
    for(int j=0;j<n;j++){
        std::cout<<std::setw(3)<<matrix[i][j]<<std::setw(3);
    }
        
}
    
for(int i=0;i<n;i++) delete [] matrix[i];
delete[] matrix;
for(int i=0;i<n;i++) delete [] matrix2[i];
delete[] matrix2;

    return 0;
}


// #include<iostream>
// #include<ctime>
// #include<iomanip>
// int **add(int** matrix,int n, int** matrix2){
//     for(int i=0;i<n;i++)
//         for(int j=0;j<n;j++)
//             matrix[i][j]=matrix[i][j]+matrix2[i][j];
// return matrix;
// }
// int **sub(int** matrix,int n, int** matrix2){
//     for(int i=0;i<n;i++)
//         for(int j=0;j<n;j++)
//             matrix[i][j]=matrix[i][j]-matrix2[i][j];
// return matrix;
// }
// void fill(int n, int** matrix){
//     for(int i=0;i<n;i++)
//         for(int j=0;j<n;j++)
//             matrix[i][j]=rand()%10;
// }
// int mat_operation(int x){
// int**result=nullptr;
// if(x==0) result=(sub)()
// }

// int main(){
// srand(time(NULL));
// int n,x;
// std::cin>>n;
// std::cout<<std::endl;
// int(**mat_operation)(int**,int,int**);
// int **matrix = new int*[n];
// for(int i=0;i<n;i++) matrix[i] = new int [n];
// int**matrix2= new int*[n];
// for(int i=0;i<n;i++) matrix2[i]= new int[n];
// fill(n,matrix);
// fill(n,matrix2);
// for(int i=0;i<n;i++){
//     for(int j=0;j<n;j++){
//          std::cout<<matrix[i][j]<<std::setw(3);
//     }
//     std::cout<<std::endl; 
// }
    
// std::cout<<std::endl;
// for(int i=0;i<n;i++){
//     std::cout<<std::endl;
//      for(int j=0;j<n;j++){
//           std::cout<<matrix2[i][j]<<std::setw(3);
//      }
      
// }
   
// std::cout<<std::endl;
// std::cout<<"0 if u want to sub , 1 if u want to add\t";
// std::cin>>x;
// if(x==0) (sub)(matrix,n,matrix2);
// if(x==1) (add)(matrix,n,matrix2);
// for(int i=0;i<n;i++){
//     std::cout<<std::endl;
//     for(int j=0;j<n;j++){
//         std::cout<<matrix[i][j]<<std::setw(3);
//     }
        
// }
    
// for(int i=0;i<n;i++) delete [] matrix[i];
// delete[] matrix;
// for(int i=0;i<n;i++) delete [] matrix2[i];
// delete[] matrix2;

//     return 0;
// }
