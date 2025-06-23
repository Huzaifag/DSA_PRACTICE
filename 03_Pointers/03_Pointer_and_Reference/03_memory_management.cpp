#include <iostream>
using namespace std;

class MyClass {
private:
    int size;
    int* array;
public:
    MyClass(int val) {
        size = val;
        cout << "Constructor called. size of array = " << size << endl;
        array = new int[size];
    }

    void display() {
        for (size_t i = 0; i < size; i++)
        {
          cout << " Value of array at index: " << i << " = " << array [i] << " " <<endl;
        }

        cout << endl ;        
    }

    void input() {
        for (size_t i = 0; i < size; i++)
        {
          cout << "Enter Value of array at index: " << i << endl;
          cin >> array[i];
        }

        cout << endl ;        
    }

    ~MyClass() {
        delete [] array; // clear memory
    }
};

int main() {
    MyClass obj(3);
    obj.input();
    obj.display();
    return 0;
}