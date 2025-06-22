#include <iostream>
using namespace std;

/*
  MyArray class handles:
  - Setting the size of an array
  - Getting the size
  - Displaying array elements passed to it
*/
class MyArray {
private:
  int size;  // Holds the size of the array

public:
  // Prompts user to input the size of the array
  void setSize();

  // Returns the current size of the array
  int getSize();

  // Displays the elements of an array using the stored size
  void displayArray(int marks[]);
};

// Definition of setSize()
// Takes user input for size and stores it in 'size' variable
void MyArray::setSize() {
  cout << "Enter Size of the Array: ";
  cin >> size;
}

// Definition of getSize()
// Returns the private 'size' member
int MyArray::getSize() {
  return size;
}

// Definition of displayArray()
// Iterates through the array and prints each element with its index
void MyArray::displayArray(int marks[]) {
  for (int i = 0; i < size; i++) {
    cout << "Element at index " << i << " = " << marks[i] << endl;
  }
}

int main() {
  // Create an object of MyArray
  MyArray marks;

  // Ask the user to enter the desired array size
  marks.setSize();

  // Get the entered size to use for array creation
  int sizeOfArray = marks.getSize();

  // Dynamically allocate an array of the entered size
  int* numbersArr = new int[sizeOfArray];

  // Prompt the user to enter elements
  cout << "Enter " << sizeOfArray << " elements:" << endl;
  for (int i = 0; i < sizeOfArray; ++i) {
    cin >> numbersArr[i]; // Input each element
  }

  // Display all entered elements using the class method
  marks.displayArray(numbersArr);

  // Free up the allocated memory to prevent memory leaks
  delete[] numbersArr;

  return 0;
}
