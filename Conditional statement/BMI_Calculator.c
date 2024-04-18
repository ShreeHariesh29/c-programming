#include <stdio.h>

int main(){
    printf("BMI Calculator\nLets calculate your Body Mass Intensity :");
    float height;
    printf("Enter your height = ");
    scanf("%f", &height);
    int weight;
    printf("Enter your weight = ");
    scanf("%d", &weight);
    if(height>=4 && height<5){
        if(weight>=45 && weight<=55){
            printf("Your are fit");
        }
        else if(weight<45){
            printf("Your are under weight");
        }
        else if(weight>55){
            printf("Your are over weight");
        }
    }
    if(height>=5 && height<=6){
        if(weight>=56 && weight<=65){
            printf("Your are fit");
        }
        else if(weight<56){
            printf("Your are under weight");
        }
        else if(weight>65){
            printf("Your are over weight");
        }
    }
    if(height>=6 && height<=7){
        if(weight>=66 && weight<=76){
            printf("Your are fit");
        }
        else if(weight<66){
            printf("Your are under weight");
        }
        else if(weight>76){
            printf("Your are over weight");
        }
    }

}