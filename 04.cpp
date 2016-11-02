#include <iostream>

using namespace std;

int divisor(int num) {
  int sum = 0;
  for (int i = 1; i <= num; i++) {
    if (num % i == 0)
      sum = sum + 1;
  }
  return sum;
}


/**
 * Create a function that takes an integer and returns how many divisors it has
 */

int main() {
  int num = 30;
  cout << divisor(num);
  return 0;
}

