#include <iostream>
#include <vector>
#include <utility>
#include <set>
#include <algorithm>

using namespace std;
// Vectors
void vectors()
{
  vector<int> v = {1, 3, 4};

  v.push_back(4);

  for (int x : v)
  {
    cout << x << " ";
  }

  v.pop_back();

  cout << endl;

  for (int x : v)
  {
    cout << x << " ";
  }

  v.insert(v.begin(), 2);

  for (int x : v)
  {
    cout << x << " ";
  }
}

// Pairs:

void pairs()
{
  pair<int, string> p = {24, "Huzaifa"};

  cout << "age = " << p.first << " Name = " << p.second << endl;
}

// Iterator Example:

void printIterator()
{
  vector<int> v = {1, 2, 3, 4, 10};
  vector<int>::iterator it;
  for (it = v.begin(); it != v.end(); it++)
  {
    cout << *it << endl;
  }
}
// Print Set:

void printSet()
{
  set<int> s = {2, 5, 7};

  s.insert(4);
  s.erase(2);

  for (int x : s)
  {
    cout << x << endl;
  }
}
// Sets Sort:

void applySort()
{
  vector<int> v = {2, 6, 1, 3, 4, 9, 5};
  cout << "Old list :";
  for (int x : v)
  {
    cout << x;
  }
  cout << endl;
  sort(v.begin(), v.end());
  cout << "New list :";
  for (int x : v)
  {
    cout << x;
  }
  cout << endl;
}

bool cmp(pair<int, int> a, pair<int, int> b)
{
  return a.second > b.second;
}

int main()
{

  // applySort();

  vector<pair<int, int>> v = {{1, 2}, {2, 1}, {3, 3}};
  sort(v.begin(), v.end(), cmp);
  for (auto x : v)
  {
    cout << x.first << " " << x.second <<endl;
  }
  return 0;
}