#include <iostream>
using namespace std;

int main() {
  // Declare three integer variables
  int a, b, c;

  // Assign values to the variables
  a = 10;
  b = 11;
  c = 15;

  // Print the memory addresses of the variables
  cout << "Address of a: " << &a << endl;
  cout << "Address of b: " << &b << endl;
  cout << "Address of c: " << &c << endl;

  // Pointers in C++: variables that store the memory addresses of other variables

  // Declare pointer variables and assign them the addresses of a, b, and c
  int* ptr1 = &a; // ptr1 points to a
  int* ptr2 = &b; // ptr2 points to b
  int* ptr3 = &c; // ptr3 points to c

  // Print the values stored in the pointers (i.e., the addresses they point to)
  cout << "Value of ptr1: " << ptr1 << endl;
  cout << "Value of ptr2: " << ptr2 << endl;
  cout << "Value of ptr3: " << ptr3 << endl;

  // Dereference ptr1 to get the value stored at the address it points to (i.e., value of a)
  cout << "*ptr1: " << *ptr1 << endl;

  return 0;
}