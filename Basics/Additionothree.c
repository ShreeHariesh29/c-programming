#include <stdio.h>

int main(){
    int a = 20;
    int c = 30;
    float b = 25.5;
    float result = a+b+c;
    printf("First value = %d\nSecon value = %d\nThird value = %f\n",a,c,b);
    printf("Addition of three values = %.2f",result);
}