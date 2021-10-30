#include <stdio.h>
#include "NumClass.h"
#include <math.h>

int main(void){
    int num1;
    int num2;
    printf("Enter first positive number: ");
    scanf("%d",&num1);
    printf("Enter a second positive number: ");
    scanf("%d",&num2);
    int max,min;
    if(num1>num2){
        max = num1;
        min = num2;
    }else{
        max = num2;
        min = num1;
    }
    printf("all Prime numbers: ");
    for(int i = min; i<=max; i++){
        if(isPrime(i)==1){
            printf("%d, ", i);
        }
    }
    printf("\n");

     printf("all Strong numbers: ");
    for(int i = min; i<=max; i++){
        if(isStrong(i)==1){
            printf("%d, ", i);
        }
    }
    printf("\n");

     printf("all Palindrome numbers: ");
    for(int i = min; i<=max; i++){
        if(isPalindrome(i)==1){
            printf("%d, ", i);
        }
    }
    printf("\n");

     printf("all Armstrong numbers: ");
    for(int i = min; i<=max; i++){
        if(isArmstrong(i)==1){
            printf("%d, ", i);
        }
    }
    printf("\n");


}