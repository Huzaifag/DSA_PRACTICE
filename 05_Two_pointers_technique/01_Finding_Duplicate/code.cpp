#include <iostream>
#include <unordered_set>
using namespace std;


int main() {
  int arr[] = {1, 3, 4, 4, 2};
  int n = sizeof(arr) / sizeof(arr[0]);
  unordered_set <int> seen = {};

  for(int i = 0; i < n; i ++){
    if(seen.count(arr[i])){
      cout << "Duplicate value = " << arr[i];
    }else{
      seen.insert(arr[i]);
    }
  }
  
    return 0;
}