//
//  main.cpp
//  Problem 2 Even Fibonacci Numbers
//
//  Created by Simon Lally 
//

/**
 // Find the sum of the even valued numbers that do not exceed four million in value
**/

#include <iostream>

int main(int argc, const char * argv[]) {
    
    int lastNum = 0, currentNum = 1, nextNum = 0, sum = 0, evenSum = 0;
    
    while (nextNum < 4000000) {
        sum += currentNum;
        if (sum%2==0) {
            evenSum+=sum;
        }
        lastNum = currentNum;
        currentNum = nextNum;
        nextNum = lastNum+currentNum;
    }
    std::cout<<evenSum<<std::endl;
    return 0;
}

