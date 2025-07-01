#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
class Solution
{
public:
  vector<int> twoSum(vector<int> &nums, int target)
  {
    unordered_map<int, int> mp = {};
    int n = nums.size();

    for (int i = 0; i < n; i++)
    {
      int need = target - nums[i];
      if (mp.find(need) != mp.end())
      {
        return {mp[need], i};
      }
      else
      {
        mp[nums[i]] = i;
      }
    }
    return {};
  }
};

int main()
{
  return 0;
}