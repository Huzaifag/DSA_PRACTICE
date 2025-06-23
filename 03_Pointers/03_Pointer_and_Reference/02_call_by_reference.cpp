#include <iostream>
using namespace std;
  int sum(int* a , int* b){
    return *a + *b;
  }

  void swap(int& n1, int& n2){
    int temp = n1;
    n1 = n2;
    n2 = temp;
  }
int main() {
    int x = 10;
    int y = 12;
    cout << sum(&x, &y) << endl;

    cout << "Original values : x = "<< x << " y = "<< y << endl;
    
    swap(x , y);
    cout << "Swaped values : x = "<< x << " y = "<< y << endl;
    return 0;
}