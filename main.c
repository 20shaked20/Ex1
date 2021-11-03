#include <stdio.h>
#include "NumClass.h"

int main(){
    int num1;
    int num2;
   /*
    printf("Enter first positive number: ");
    */
    scanf("%d",&num1);
   // printf("Enter a second positive number: ");
    scanf("%d",&num2);
    int max,min;
    if(num1>num2){
        max = num1;
        min = num2;
    }else{
        max = num2;
        min = num1;
    }
     printf("The Armstrong numbers are:");
    for(int i = min; i<=max; i++){
        if(i == 0){
            i++;
        }
        if(isArmstrong(i)==1){
            printf(" %d", i);
        }
    }
    printf("\n");

    printf("The Palindromes are:");
    for(int i = min; i<=max; i++){
        if(i == 0){
            i++;
        }
        if(isPalindrome(i)==1){
            printf(" %d", i);
        }
    }
    
    printf("\n");

    printf("The Prime numbers are:");
    for(int i = min; i<=max; i++){
        if(i == 0){
            i++;
        }
        if(i == 1){
            printf(" %d", i); // i = 1 is prime so print..
        }
        if(isPrime(i)==1){
            printf(" %d", i);
        }
    }
    printf("\n");

     printf("The Strong numbers are:");
    for(int i = min; i<=max; i++){
        if(i == 0){
            i++;
        }
        if(isStrong(i)==1){
            printf(" %d", i);
        }
    }
    printf("\n");
    return 0;
}