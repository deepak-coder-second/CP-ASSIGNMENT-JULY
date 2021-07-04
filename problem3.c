//TODO:to find a factorial of given number (Problem No. 3)

#include <stdio.h>

//factorial function declaration
void fact(int num);

//main function
int main(){
    //variable declaration
    int num;

    printf("\nEnter the number : ");
    scanf("%d",&num);

    fact(num);

    return 0;
}

//fact function
void fact(int num){
    int i;
    int factnum = 1;

    for ( i = 2; i <= num; i++)
    {
        factnum = factnum * i;
    }

    printf("\nThe factorial of given number is : %d\n",factnum);
    
}