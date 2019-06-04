// Project Euler Challenge 6
// Simon Lally

/*  Find the difference between the sum of the squares of the first one
hundred natural numbers and the square of the sum.
BruteForce style, will run terribly as NUM increases in size */

#include <iostream>

int main(int argc, char const *argv[]) {
  const int NUM = 100; // first 100 natural numbers
  int sum = 0;
  int squared = 0;
  int res = 0;

  for (int i = 1; i <= NUM; i++) {
    sum += i;
    squared += (i*i);
  }

  res = (sum * sum) - squared;

  std::cout << res << std::endl;
  return 0;
}
