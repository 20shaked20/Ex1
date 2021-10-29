//
// Created by Shaked Levi on 26/10/2021.
//
#include <stdio.h>
#include "NumClass.h"
#define true 1
#define false 0


int isPrime(int num) {

    if (num <= 1) {
        return false;
    } else {
        for (int i = 2; i <= num / 2; i = i + 1) {
            if (num % i == 0) {
                return false;
            }
        }
    }
    return true;

}

/////////////////////////////// private function: a recursive function for calculating factorial.
int factorial(int n) {
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}

///////////////////////////////
int isStrong(int num) {

    int tmp = num;
    int sum = 0; // the checking number
    while (tmp > 0) {
        int last_digit = tmp%10;
        sum = sum + factorial(last_digit); // 145, 5,4,1
        tmp = tmp / 10; //145 > 14 > 1 > 0
    }
   
    if (num == sum) {
        return true;
    }
    return false;
    
}
