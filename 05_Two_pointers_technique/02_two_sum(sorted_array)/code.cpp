#include <iostream>
#include <vector>
using namespace std;
vector<int> twoSum(vector<int> &nums, int target)
{
  int left = 0;
  int right = nums.size() - 1;
  while (left < right)
  {
    int sum = nums[left] + nums[right];
    if (sum == target)
    {
      return {left, right};
    }
    else if (sum > target)
    {
      right--;
    }
    else
    {
      left++;
    }
  }
  return {};
}

int main()
{

  vector<int> nums = {2, 7, 11, 15};
  int target = 9;
  vector<int> result = twoSum(nums, target);
  if (!result.empty()) {
    cout << "Indices: " << result[0] << ", " << result[1] << endl;
  } else {
    cout << "No solution found." << endl;
  }

  return 0;
}