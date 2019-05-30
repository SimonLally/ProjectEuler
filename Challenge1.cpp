//
//  main.cpp
//  Project Euler Problem 1
//
//  Created by Simon Lally

/*
 // Find the sum of all the multiples of 3 and 5 less than 1000
 */

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {

    int sum = 0;
    int sumOf15 = 0;
    
    // Find multiples of 3 and add to sum
    for (int i = 0; i < 1000; i+=3) {
        sum += i;
    }
    
    // Find multiples of 5 and add to sum
    for (int i = 0; i < 1000; i+=5) {
        sum += i;
    }
    
    // Find multiples of 15 and remove from sum to eliminate duplicates
    for (int i = 0; i < 1000; i+=15) {
        sumOf15 +=i;
    }
    
    // Print the sum without the duplicates
    cout<<sum - sumOf15<<endl;
    
    return 0;
}
