//TODO: find the sum of diagonal elements of a matrix
#include <stdio.h>

//sum of diagonal number function declaration
void sumOfDiagonal(int arr[50][50],int size);

//main function
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
    sumOfDiagonal(matrix,matrixSize);

    return 0;
    
    
}

void sumOfDiagonal(int arr[50][50],int size){
    int i;
    int sum = 0;
    for ( i = 0; i < size; i++)
    {
        sum = sum + arr[i][i];
    }

    printf("\n sum = %d \n",sum);
    
}