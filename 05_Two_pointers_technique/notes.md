### ✅ **Two Pointers Technique – Full Guide**

---

## 🔍 **What is Two Pointers Technique?**

Two pointers is a technique used when you want to **traverse a sequence** (like an array or string) **from both ends** or at **different speeds** using **two separate pointers** (usually indices).

### 📌 Mostly used in:

* **Sorted arrays**
* **Searching problems**
* **Optimizing brute-force solutions**
* **Removing duplicates, finding pairs/subarrays**

---

## 🧠 **Why We Use It?**

### Problem with traditional methods:

In brute-force, we often use **nested loops**:

```cpp
for (int i = 0; i < n; i++)
  for (int j = i+1; j < n; j++)
    // do something with arr[i] and arr[j]
```

* ⛔ **Time complexity = O(n²)** — not efficient
* Two pointers helps reduce it to **O(n)** or **O(n log n)**.

---

## 🏁 Types of Two Pointer Techniques

| Technique      | Pointers Used                  | Example Use Case                          |
| -------------- | ------------------------------ | ----------------------------------------- |
| Opposite Ends  | `left = 0`, `right = n-1`      | Find if two numbers sum to target (2-sum) |
| Same Direction | `slow`, `fast` both start at 0 | Remove duplicates, sliding window         |

---

## ✅ **Step-by-Step Example**

### ❓ Problem: Given a **sorted array**, find if there exist **two numbers that sum up to a target**.

### Input:

```cpp
arr = [1, 2, 4, 6, 10], target = 8
```

---

### ❌ Brute Force Approach (O(n²)):

```cpp
for (int i = 0; i < n; i++)
  for (int j = i+1; j < n; j++)
    if (arr[i] + arr[j] == target)
      return true;
```

---

### ✅ Two Pointer Approach (O(n)):

**Steps:**

1. Set `left = 0`, `right = n-1`
2. While `left < right`:

   * Calculate `sum = arr[left] + arr[right]`
   * If `sum == target`: found!
   * If `sum < target`: move `left++`
   * If `sum > target`: move `right--`

```cpp
bool hasTwoSum(vector<int>& arr, int target) {
    int left = 0, right = arr.size() - 1;
    while (left < right) {
        int sum = arr[left] + arr[right];
        if (sum == target) return true;
        else if (sum < target) left++;
        else right--;
    }
    return false;
}
```

✅ Works in **O(n)** and avoids nested loops.

---

## ⚙️ More Examples

### 1. **Remove Duplicates from Sorted Array** (Leetcode 26)

* Keep `i = slow`, `j = fast`
* Move `j` and update `i` when new element found

---

### 2. **Reverse a String**

* `left = 0`, `right = n-1`
* Swap characters until `left < right`

---

### 3. **Container with Most Water**

* Find max area between two heights in array
* Use two pointers from both ends

---

### 4. **Palindrome Check**

* `left = 0`, `right = n-1`
* Compare characters while moving inward

---

## 🔚 Summary

| Brute Force         | Two Pointers               |
| ------------------- | -------------------------- |
| Nested loops        | Single while loop          |
| O(n²) time          | O(n) time                  |
| Repeats comparisons | Smart skips based on logic |

---

### 🔥 Pro Tip:

Two pointers **always work best on sorted arrays** or **when the problem requires comparing two values in a sequence**.

