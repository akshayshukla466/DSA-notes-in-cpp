# 🔵 Left Rotate the Array by One

---

## 📌 Problem Statement  
Given an integer array `nums`, rotate the array **to the left by one position**.  
You **do not need to return anything** — simply modify the given array.

🔗 **Practice on LeetCode:**  
[Rotate Array](https://leetcode.com/problems/rotate-array/description/)  
*(Note: LeetCode rotates right, but practicing here improves array manipulation skills.)*

---

## 🧪 Examples

### **Example 1**  
**Input:** `nums = [1, 2, 3, 4, 5]`  
**Output:** `[2, 3, 4, 5, 1]`  
**Explanation:**  
Initial → `[1, 2, 3, 4, 5]`  
After one left rotation → `[2, 3, 4, 5, 1]`

---

### **Example 2**  
**Input:** `nums = [-1, 0, 3, 6]`  
**Output:** `[0, 3, 6, -1]`  
**Explanation:**  
Initial → `[-1, 0, 3, 6]`  
After one left rotation → `[0, 3, 6, -1]`

---

## 🧩 Brute Force Approach

### 🔍 Algorithm
- Create a **dummy array** of the same size.
- Shift all elements from the original array **one position left**.
- Move the **first element** to the **end** of the dummy array.
- Print the final rotated array.

### 💻 Code (C++)
```cpp
#include<bits/stdc++.h>
using namespace std;

// Function to shift array elements left by one position
void solve(int arr[], int n) {
    int temp[n];  // Temporary array to store the shifted elements

    // Shift elements to the left by one position
    for (int i = 1; i < n; i++) {
        temp[i - 1] = arr[i];
    }
    temp[n - 1] = arr[0];  // First element moves to last

    // Print the rotated array
    for (int i = 0; i < n; i++) {
        cout << temp[i] << " ";
    }
    cout << endl;
}

int main() {
    int n = 5;
    int arr[] = {1, 2, 3, 4, 5};

    solve(arr, n);

    return 0;
}
```

### ⏱️ Complexity
- **Time:** O(N)  
- **Space:** O(N)

---

## 🚀 Optimal Approach

### 🔍 Algorithm
- Store the **first element**.
- Shift each element one step left.
- Place the stored element at the **end** of the array.

### 💻 Code (C++)
```cpp
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void rotateArrayByOne(vector<int>& nums) {
        int temp = nums[0]; // Store first element
        
        // Shift elements left
        for (int i = 1; i < nums.size(); ++i) {
            nums[i - 1] = nums[i];
        }

        // Place first element at the end
        nums[nums.size() - 1] = temp;
    }
};

int main() {
    Solution solution;
    vector<int> nums = {1, 2, 3, 4, 5};

    solution.rotateArrayByOne(nums);

    for (int num : nums) {
        cout << num << " ";
    }

    return 0;
}
```

### ⏱️ Complexity
- **Time:** O(N)  
- **Space:** O(1)

---

## 📝 Key Concepts
- **Array Rotation Basics:** Used in many cyclic array problems.  
- **In-place Update:** Modify original array without extra memory.  
- **Element Shifting:** Core idea for left or right rotation.  

---

## 📚 Related Questions
1. Rotate Array by K Steps  
2. Cyclically Rotate Array by One (Right)  
3. Move Zeroes to End  
4. Reverse an Array In-Place  

---

## 🏁 Summary
- Brute force uses a temporary array → simple but extra space.  
- Optimal approach performs a clean **in-place left shift** with constant space.  
- Understanding rotation logic helps with many advanced array manipulation tasks.

