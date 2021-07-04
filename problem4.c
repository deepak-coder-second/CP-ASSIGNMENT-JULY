//TODO: to swap values of two integer numbers 

#include <stdio.h>

//swap function declaration
void swap(int num);

//main function
int main(){
    int num;
    //get the number
    printf("\nEnter the number : ");
    scanf("%d",&num);

    printf("\nThe Number before Swapping = %d \n",num);
    swap(num);

    return 0;
}

//swap function

void swap(int num){
    int swapNum=0;
    int temp;

    temp = num % 10 ; 
    swapNum = temp * 10;
    num = num/10 ;
    swapNum = swapNum + num; 

    printf("\nThe Number after Swapping = %d \n",swapNum);

}