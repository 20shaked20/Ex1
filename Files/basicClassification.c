//
// Created by Shaked Levi on 26/10/2021.
//
#include <stdio.h>
#include "NumClass.h"

enum bool{true = 1,false = 0};

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
        return (n * factorial(n - 1));
}

///////////////////////////////
int isStrong(int num) {

    int tmp = num;
    int sum;
    if (num == 0) {
        return false;
    }
    while (tmp != 0) {
        sum += factorial(tmp % 10);
        tmp = tmp / 10;
    }
    if (num == sum) {
        return true;
    }
    return false;
}
