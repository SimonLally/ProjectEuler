//
//  main.cpp
//  ProjectEuler5
//
//  Created by Simon Lally
/*
 
 2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
 
 What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
 
*/

#include <iostream>

int isEvenlyDivisible(int divisor);

int main(int argc, const char * argv[]) {

    std::cout<<isEvenlyDivisible(20)<<std::endl;

    return 0;
}

int isEvenlyDivisible(int divisor) {
    int i = 1; // main var
    int count = 1; // counter
    int inc =1 ; // increment
    
    while (count <= divisor) {
        while (i%count != 0) {
            i +=inc;
        }
        inc = i;
        count++;
    }
    return i;
}