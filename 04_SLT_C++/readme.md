---

# 🚀 Mastering C++ STL: Beginner to Advanced Guide

---

## 🧠 What is STL?

**STL (Standard Template Library)** is a powerful feature of C++ that provides generic classes and functions for data structures and algorithms.

### Key Components:

1. **Containers** – Data structures (like `vector`, `list`, `set`, etc.)
2. **Algorithms** – Sorting, searching, etc.
3. **Iterators** – Pointers-like objects used to traverse containers.
4. **Function Objects (Functors)** – Objects used like functions.
5. **Utilities** – Pairs, tuples, etc.

---

## 🟢 SECTION 1: STL BASICS (BEGINNER)

---

### ✅ 1. **Vectors**

Dynamic arrays.

```cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3};

    v.push_back(4);      // Add at end
    v.pop_back();        // Remove last element
    v.insert(v.begin(), 0); // Insert at beginning

    for (int x : v) cout << x << " ";
}
```

---

### ✅ 2. **Pairs**

Group two values.

```cpp
#include <iostream>
#include <utility>
using namespace std;

int main() {
    pair<int, string> p = {1, "Huzaifa"};
    cout << p.first << " " << p.second;
}
```

---

### ✅ 3. **Iterators**

Pointer-like objects.

```cpp
#include <vector>
#include <iostream>
using namespace std;

int main() {
    vector<int> v = {10, 20, 30};
    vector<int>::iterator it;
    for (it = v.begin(); it != v.end(); ++it)
        cout << *it << " ";
}
```

---

## 🟡 SECTION 2: INTERMEDIATE STL

---

### ✅ 4. **Set / Multiset**

Stores **unique sorted** elements.

```cpp
#include <set>
int main() {
    set<int> s = {5, 1, 3};
    s.insert(4);
    s.erase(1);
    for (int x : s) cout << x << " ";
}
```

> `multiset` allows duplicate values.

---

### ✅ 5. **Map / Multimap**

Stores key-value pairs in sorted order.

```cpp
#include <map>
int main() {
    map<string, int> m;
    m["Huzaifa"] = 100;
    m["Ali"] = 90;

    for (auto p : m)
        cout << p.first << " = " << p.second << endl;
}
```

> `unordered_map` offers faster access (hash-based).

---

### ✅ 6. **Stack / Queue**

#### Stack (LIFO):

```cpp
#include <stack>
int main() {
    stack<int> st;
    st.push(1); st.push(2);
    cout << st.top(); // 2
    st.pop();
}
```

#### Queue (FIFO):

```cpp
#include <queue>
int main() {
    queue<int> q;
    q.push(1); q.push(2);
    cout << q.front(); // 1
    q.pop();
}
```

---

### ✅ 7. **Deque (Double-ended Queue)**

```cpp
#include <deque>
int main() {
    deque<int> dq;
    dq.push_front(1); dq.push_back(2);
    dq.pop_front();
}
```

---

### ✅ 8. **Priority Queue (Heap)**

#### Max-Heap (default):

```cpp
#include <queue>
priority_queue<int> pq;
pq.push(10); pq.push(5);
cout << pq.top(); // 10
```

#### Min-Heap:

```cpp
priority_queue<int, vector<int>, greater<int>> minHeap;
```

---

## 🔵 SECTION 3: ADVANCED STL

---

### ✅ 9. **Algorithms Library**

```cpp
#include <algorithm>
#include <vector>
int main() {
    vector<int> v = {4, 2, 5, 3};
    sort(v.begin(), v.end());         // 2 3 4 5
    reverse(v.begin(), v.end());      // 5 4 3 2
    if (binary_search(v.begin(), v.end(), 3)) cout << "Found";
}
```

---

### ✅ 10. **Custom Sorting (with Comparators)**

```cpp
bool cmp(pair<int, int> a, pair<int, int> b) {
    return a.second > b.second;
}

vector<pair<int, int>> v = {{1, 2}, {2, 1}, {3, 3}};
sort(v.begin(), v.end(), cmp);
```

---

### ✅ 11. **Unordered Containers (Hashing)**

```cpp
#include <unordered_map>
unordered_map<string, int> mp;
mp["Huzaifa"] = 1;
```

* Faster than `map`, but not ordered.
* Includes: `unordered_map`, `unordered_set`.

---

### ✅ 12. **Bitset (for Bit Manipulation)**

```cpp
#include <bitset>
bitset<8> b(string("1100"));
cout << b.count(); // 2 (no. of 1s)
```

---

### ✅ 13. **Tuple**

```cpp
#include <tuple>
tuple<int, string, float> t = make_tuple(1, "Huzaifa", 99.5);
cout << get<1>(t); // Huzaifa
```

---

## 🧪 BONUS: STL Utility Tips

| Action                   | Code                                  |
| ------------------------ | ------------------------------------- |
| Fill container           | `fill(v.begin(), v.end(), 0);`        |
| Count frequency          | `count(v.begin(), v.end(), x);`       |
| Find max element         | `*max_element(...)`                   |
| Lower Bound              | `lower_bound(v.begin(), v.end(), x);` |
| Upper Bound              | `upper_bound(v.begin(), v.end(), x);` |
| Custom comparator in set | `set<int, greater<int>> s;`           |
| Remove elements          | `v.erase(remove(...), v.end());`      |

---

## 📚 Practice Platforms:

1. [LeetCode](https://leetcode.com/)
2. [Codeforces](https://codeforces.com/)
3. [GeeksforGeeks STL](https://www.geeksforgeeks.org/the-c-standard-template-library-stl/)
4. [AtCoder Beginner Contests](https://atcoder.jp/)

---

## 🧠 Final STL Mastery Projects (for Practice)

1. **Build a Task Scheduler (using Priority Queue & Map)**
2. **Implement LRU Cache (using List + Map)**
3. **File Frequency Counter (Map + Vector)**
4. **Leaderboard System (Set + Custom Sort)**
5. **String Compression (Bitset + Map)**

---

