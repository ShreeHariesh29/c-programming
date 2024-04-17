#include <stdio.h>

int main(){
    int radius;
    printf("Lets calculate area of circle\n");
    printf("Enter the radius of circle =");
    scanf("%d",&radius);
    float result = 3.14 * radius * radius;
    printf("%.2f",result);
}