#include <iostream>
using namespace std;

class MultiArray {
private:
    int rows;
    int cols;
    int array[0][0]= {};

public:
    // Constructor
    MultiArray(int rows, int cols) {
        this->rows = rows;
        this->cols = cols;
    }

    // Input function
    void input() {
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cout << "Enter element at " << i << " x " << j << ": ";
                cin >> array[i][j];
                cout<<endl;
            }
        }
    }

    // Output function
    void output() {
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cout << "Element at " << i << " x " << j << ": ";
                cout << array[i][j] << endl;
            }
        }
    }

    // Destructor
    ~MultiArray() {
        array[0][0] = {};
    }
};

int main() {
    int rows, cols;
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;

    MultiArray obj(rows, cols);

    obj.input();
    obj.output();

    return 0;
}
