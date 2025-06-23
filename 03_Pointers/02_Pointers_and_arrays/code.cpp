#include <iostream>
using namespace std;

int main() {
   int arr[5] = {1,2,3,4,5};
   int* ptr;

  ptr = arr;

  for (size_t i = 0; i < 5; i++)
  {
    cout << "Value: " << arr[i] << " Address: "<< ptr + i  << endl;
  }
  

    return 0;
}