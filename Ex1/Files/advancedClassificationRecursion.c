//
// Created by Shaked Levi on 26/10/2021.
//
#include <stdio.h>
#include "NumClass.h"
#define true 1
#define false 0

/// private helper method - reverse in recursion:
int reverse(int num,int tmp){
    if(num==0){
        return tmp;
    }
    tmp = (tmp*10) + (num%10);
    return reverse(num/10,tmp);

}

int isPalindrome(int num){

    if (num == reverse(num,0)){
        return true;
    }
    return false;
}



/// private method to calculate how many digits the number has.
int digitsSize(int num){
    int size = 0;
    while(num>0){
        num=num/10;
        size++;
    }
    return size;
}
/// private method to calculate the power of num^index.
int power(int index, int num){
    int sum = 1;
    for(int i = 0; i<index; i++){
        sum = sum*num;
    }
    return sum;
}

///private recursive helper method.
int isArm(int num, int tmp,int digits){
    int x = digits;
    if(num==0){
        return tmp;
    }
    int remainder = num%10;
    tmp = power(digits,remainder) + tmp;
    return isArm(num/10,tmp,x);
}

int isArmstrong(int num) { 

    if(num == isArm(num,0,digitsSize(num))){
        return true;
    }
   return false;
}
