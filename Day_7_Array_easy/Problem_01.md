# Find the Largest Element in an Array

---

## **Examples**

### **Example 1**
**Input:**  
`arr[] = {2,5,1,3,0}`

**Output:**  
`5`

**Explanation:**  
5 is the largest element in the array.

---

### **Example 2**
**Input:**  
`arr[] = {8,10,5,7,9}`

**Output:**  
`10`

**Explanation:**  
10 is the largest element in the array.

---

# Brute Force Approach

## Solution 1: Sorting

### **Intuition:**  
Sort the array in ascending order.  
The largest element will always be at the last index.

### **Approach:**  
1. Sort the array  
2. Return element at index `n - 1`

### **Dry Run:**  
Before sort: `{2,5,1,3,0}`  
After sort: `{0,1,2,3,5}`  
Largest element = `5`

---

## **Code (Brute Force)**

```cpp
#include<bits/stdc++.h>
using namespace std;

int sortArr(vector<int>& arr) {
    sort(arr.begin(), arr.end());
    return arr[arr.size() - 1];
}

int main() {
    vector<int> arr1 = {2,5,1,3,0};
    vector<int> arr2 = {8,10,5,7,9};

    cout << "The Largest element in the array is: " << sortArr(arr1) << endl;
    cout << "The Largest element in the array is: " << sortArr(arr2);

    return 0;
}
```

---

## **Complexity Analysis**

| Metric | Complexity |
|--------|------------|
| Time   | O(N log N) |
| Space  | O(1)       |

---

# Optimized Approach

## Solution 2: Find Max in One Scan

### **Intuition:**  
Maintain a variable `max`  
Update it whenever a bigger element is found.

### **Approach:**  
1. Initialize `max = arr[0]`  
2. Loop over array  
3. If element is bigger, update max  
4. Return max

---

## **Code (Optimal)**

```cpp
#include <bits/stdc++.h>
using namespace std;

int findLargestElement(int arr[], int n) {
    int max = arr[0];
    for (int i = 0; i < n; i++) {
        if (max < arr[i]) max = arr[i];
    }
    return max;
}

int main() {
    int arr1[] = {2,5,1,3,0};
    int arr2[] = {8,10,5,7,9};

    cout << "The largest element in the array is: " << findLargestElement(arr1, 5) << endl;
    cout << "The largest element in the array is: " << findLargestElement(arr2, 5) << endl;

    return 0;
}
```

---

## **Complexity Analysis**

| Metric | Complexity |
|--------|------------|
| Time   | O(N) |
| Space  | O(1) |

### Key Notes
- Always prefer **single scan approach** unless sorting is needed for some other reason.
- Works for arrays of **any size and type** (integers, floats).
- Can also be extended to:
  - Find **second largest** element
  - Find **minimum** element
  - Find **both min and max in one scan**
