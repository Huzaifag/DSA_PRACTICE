#include <iostream>
using namespace std;

// MyArray class encapsulates an integer array and provides methods for input, output, sum, and average.
class MyArray
{
private:
  int size;        // Size of the array
  int* array;      // Pointer to dynamically allocated array
  int totalSum;    // Stores the sum of array elements
  int avg;         // Stores the average (as integer, but average() returns float)

public:
  MyArray();       // Constructor: allocates memory and reads size
  ~MyArray();      // Destructor: deallocates memory
  void input();    // Reads array elements from user
  void output();   // Prints array elements
  int sum();       // Calculates and returns sum of elements
  float average(); // Calculates and returns average of elements
};

// Constructor: prompts user for array size and allocates memory
MyArray::MyArray()
  : size(0), array(nullptr), totalSum(0), avg(0)
{
  cout << "Enter size of array." << endl;
  cin >> size;
  array = new int[size];
}

// Destructor: releases dynamically allocated memory
MyArray::~MyArray()
{
  delete[] array;
}

// Reads elements into the array from user input
void MyArray::input() {
  for (int i = 0; i < size; i++) {
    cout << "Enter value for index: " << i << endl;
    cin >> array[i];
  }
}

// Outputs the elements of the array
void MyArray::output() {
  for (int i = 0; i < size; i++) {
    cout << "Value at index: " << i << array[i] << endl;
  }
}

// Calculates and returns the sum of array elements
int MyArray::sum() {
  totalSum = 0;
  for (int i = 0; i < size; i++) {
    totalSum += array[i];
  }
  return totalSum;
}

// Calculates and returns the average of array elements as a float
float MyArray::average() {
  avg = sum() / size; // Integer division
  return avg;
}

int main() {
  // Create MyArray object, input values, and display results
  MyArray arr;
  arr.input();
  arr.output();
  cout << endl;
  cout << "sum of array = " << arr.sum() << endl;
  cout << "Average of array = " << arr.average() << endl;

  return 0;
}