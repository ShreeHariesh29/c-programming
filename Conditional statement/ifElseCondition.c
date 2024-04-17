#include <stdio.h>

int main(){
    int num;
    printf("Enter a number to check Prime or not = ");
    scanf("%d", &num);
    if(num%2 == 0){
        printf("The given number '%d' is even",num);
    }
    else{
        printf("The given number '%d' is odd",num);
    }
}