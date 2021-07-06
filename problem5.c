//TODO: selection sort function 

#include <stdio.h>

//function delcaration
void selectionSort(int arr[50],int size);

//global variables
int i;
int j;

//main function
int main(){
    //varible declaration and intialization
    int array[50];
    int sizeOfArray;

    //get the size of array
    printf("Enter the size of the array:");
    scanf("%d",&sizeOfArray);

    //get the array elements
    printf("Enter the elements of array");
    for(i=0;i<sizeOfArray;i++){
        scanf("%d",&array[i]);
    }

    //call the function 
    selectionSort(array,sizeOfArray);
}

void selectionSort(int arr[50],int size){
    int min,temp;

    for(i=0;i<size-1;i++){
        min = i;
        for(j=i+1;j<size;j++){
            if(arr[min]>arr[j]){
                min = j;
            }
        }
        if(arr[min]!= i){
            temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        
        }
    }

    printf("/n Elements in array:");
    for ( i = 0; i < size; i++){
        printf("[%d]",arr[i]);
    }
    printf("\n");
    
}