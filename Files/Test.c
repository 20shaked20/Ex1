#include <stdio.h>
#include "NumClass.h"

int main(void){
    
    //Basic Classification tests:
  /*  
    //isPrime:
    int num1;
    printf("Enter a number to check if 'isPrime' ");
    scanf("%d", &num1);
    int x1 = isPrime(num1);
    if(x1 == 1){
        printf("isPrime: %d \n",num1);
    }
    else{
        printf("is not Prime: %d \n",num1);
    }
    
    //isStrong: 
    int num2;
    printf("Enter a number to check if 'isStrong' ");
    scanf("%d", &num2);
    int x2 = isStrong(num2);
    if(x2 == 1){
        printf("isStrong: %d \n",num2);
    }
    else{
        printf("is not Strong: %d \n",num2);
    }
    return 0;
*/
    //Advacned Classifciation tests:

    //isPalindrome:
    int num3;
    printf("Enter a number to check if 'isPalindrome' ");
    scanf("%d", &num3);
    int x3 = isPalindrome(num3);
    if(x3 == 1){
        printf("isPalindrome: %d \n",num3);
    }
    else{
        printf("is not Palindrome: %d \n",num3);
    }
    
    //isArmstrong:
     int num4;
    printf("Enter a number to check if 'isArmstrong' ");
    scanf("%d", &num4);
    int x4 = isArmstrong(num4);
    if(x4 == 1){
        printf("isArmStrong: %d \n",num4);
    }
    else{
        printf("is not ArmStrong: %d \n",num4);
    }

    return 0;
    

    //Advanced Classification Recursion tests:

    //isPalindrome:
    /*
    int num5;
    printf("Recursive Method: ");
    printf("Enter a number to check if 'isPalindrome' ");
    scanf("%d", &num5);
    int x5 = isPalindrome(num5);
    if(x5 == 1){
        printf("isPalindrome: %d \n",num5);
    }
    else{
        printf("is not Palindrome: %d \n",num5);
    }
    */
}