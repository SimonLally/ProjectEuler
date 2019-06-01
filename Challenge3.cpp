//
//  main.cpp
//  Project Euler Challenge 3 - Largest Prime Factor

/*          ** INSTRUCTIONS **
 The prime factors of 13195 are 5, 7, 13 and 29.
 
 What is the largest prime factor of the number 600851475143 ?
*/

#include <iostream>
#include <stack>

using namespace std;

int main() {
    
    long x = 600851475143;
    stack<int> primeFactor;
    int biggestFactor;
    
    // Loop through entire number starting at 2
    for (int i = 2; i <= x; i++) {
        // So long as x is divisable evenly by the current index it is a prime factor
        while (x % i == 0) {
            // Set x to itself divided by the index
            x /= i;
            // Push prime factors to stack
            primeFactor.push(i);
        }
    }
    
    // Assign biggestFactor to the top of the stack
    biggestFactor = primeFactor.top();
    cout<<biggestFactor<<endl;
   
    return 0;
}
