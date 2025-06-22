#include <iostream>
using namespace std;
int main() {
  
  int num[2][3] = 
    {
      {4,3,6},
      {9,8,1}
    };

    //1st Row
  cout<<num[0][0]<<endl;
  cout<<num[0][1]<<endl;
  cout<<num[0][2]<<endl;

    //2nd Row
  cout<<num[1][0]<<endl;
  cout<<num[1][1]<<endl;
  cout<<num[1][2]<<endl;
  return 0;
}