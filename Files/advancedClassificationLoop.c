//
// Created by Shaked Levi on 26/10/2021.
//
#include <stdio.h>
#include "NumClass.h"
#define true 1
#define false 0


int isPalindrome(int num){ //remains the same when its digits reversed >> creating a new number.

    if(num>-9 && num<9){ //one-digit number therefore is a palindrome.
        return true;
    }

    int isPal = 0, remainder;
    int tmp = num; //temporary number for checking

    while(tmp>0){
        remainder = tmp%10; 
        isPal = (isPal*10)+remainder; 
        tmp = tmp/10;
    }

    if(isPal == num){
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


int isArmstrong(int num){

    int digits = digitsSize(num);
    int tmp = num;
    int isArmS = 0;
    int remainder;

    for(int i = 0; i<digits; i++){
        remainder = tmp%10;
        isArmS += power(digits, remainder);
        tmp = tmp/10;
    }

    if(isArmS == num){
        return true;
    }
    return false;
}