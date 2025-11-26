# Check if an Array is Sorted

---

## 📌 Problem Statement  
Given an array of size **n**, determine whether the array is sorted in **ascending (non-decreasing) order**.  
Return **True** if sorted, otherwise **False**.

---

## 📘 Examples

### Example  
**Input:**  
`arr = [1, 2, 3, 4, 5]`

**Output:**  
`True`

---

# 🟠 Brute Force Approach

## ✅ Algorithm
- Start from index `0` and compare it with all future elements.
- If `arr[j] < arr[i]` for any `j > i`, return **False**.
- If full array is traversed without violation → return **True**.
- For `n = 0` or `n = 1`, return **True**.

---

## 🧾 Code (Brute Force)
```cpp
#include <bits/stdc++.h>
using namespace std;

// Function to check if the array is sorted
bool isSorted(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[i]) 
                return false;
        }
    }
    return true;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5}, n = 5;
    bool ans = isSorted(arr, n);
    
    if (ans) cout << "True" << endl;
    else cout << "False" << endl;
    
    return 0;
}
```

---

## ⏱️ Complexity
| Metric | Complexity |
|--------|------------|
| Time   | O(N²)      |
| Space  | O(1)       |

---

# 🟢 Optimal Approach (Single Pass)

## ✅ Algorithm
- Traverse from index `1` to `n-1`.
- For each index check:  
  `arr[i] >= arr[i - 1]`  
- If any element violates this condition → return **False**.
- If full traversal completes OR array size is `0/1` → return **True**.

---

## 🧾 Code (Optimal)
```cpp
#include<bits/stdc++.h>
using namespace std;

// Function to check if the array is sorted
bool isSorted(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[i - 1])
            return false;
    }
    return true;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5}, n = 5;
    cout << (isSorted(arr, n) ? "True" : "False");
}
```

---

## ⏱️ Complexity
| Metric | Complexity |
|--------|------------|
| Time   | O(N)       |
| Space  | O(1)       |

---
