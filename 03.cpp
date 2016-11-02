#include <iostream>

using namespace std;

void multiplyvalue(float* pointer, float num) {
  float* sum;
  *sum = *pointer * num;
  cout << "The final value: " << *sum << endl;
  cout << "Address of the final value: " << pointer << endl;
}

/*void multiplyvalue2(float* pointer, float num) {
  float sum;
  sum = *pointer * num;
  cout << sum << endl;
  float* sumpointer = &sum;
  cout << sumpointer;
}
*/

/**
 * Create a function that takes a pointer to a float and a float, then it should
 * multiply the value of the pointer with the given float and save the result
 * where the pointer points.
 * Please mutliply the total variable by 5 with it.
 */

int main() {
  float total = 123;
  float number = 6;
  multiplyvalue (&total, number);
  return 0;
}

