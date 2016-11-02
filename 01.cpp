#include <iostream>

using namespace std;

bool biggernum(int array[], int length, int lookfor) {
  bool result = false;
  for (int i = 0; i < length; i++)
    if (array[i] >= lookfor)
      result = true;
  return result;
}

/**
 * Create a function that decides if there is a bigger or equal number than a given number in an array
 * It should take the array, it's length and a number as a parameter, then return a boolean
 */

int main() {
  int array[] = {3, 2, 4, 6, -1};
  int length = sizeof(array) / sizeof(array[0]);
  if (biggernum (array, length, 6))
     cout << "Found a bigger or equal number than the given number." << endl;
  else
    cout << "Every number is smaller than the given number." << endl;
  return 0;
}

