#include<stdio.h>

    int main(){
        int C;
        printf("enter celsius:");
        scanf("%d",&C);
        float fahrenheit=((9.0/5)*C)+32;
        printf("\n fehrenheit=%.2f",fahrenheit);
    }