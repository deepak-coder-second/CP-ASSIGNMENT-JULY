//TODO:to check whether a given matrix is symmetric or not  

#include <stdio.h>

//is the matrix is symetric function declaration
void isSymetric(int matrix[50][50],int matrixSize);

int main(){
    //declaration and intialization of variables
    int matrix[50][50];
    int matrixSize,i,j;
    //get the row size or column size
    printf("row size or column size:");
    scanf("%d",&matrixSize);
    //get the elements in matrix
    printf("Enter the Elements of matrix");
    for ( i = 0; i < matrixSize; i++)
    {
        for ( j = 0; j < matrixSize; j++)
        {
           scanf("%d",&matrix[i][j]);
        }
        
    }
    //function calling
    isSymetric(matrix,matrixSize);
    
    return 0;
}

void isSymetric(int matrix[50][50],int matrixSize){
    /*1.find the transpose 
      2.check the given matrix and transpose are same
    */
   //varibles 
   int trans[50][50];
   int i,j,flag=1;
    //find the transpose
   for(i=0;i<matrixSize;i++){
       for(j=0;j<matrixSize;j++){
           trans[i][j] = matrix[j][i];
       }
   }

    //checking
    for(i=0;i<matrixSize;i++){
       for(j=0;j<matrixSize;j++){
           if(trans[i][j]!=matrix[i][j]){
               flag = 0;
           }

        }
   }

   if (flag ==0)
   {
       printf("\nGiven matrix is  Not a Symetric Matrix\n");
   }else{
       printf("\nGiven matrix is  a Symetric Matrix\n");
   }
   
   
}
