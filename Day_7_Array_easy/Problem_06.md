# 🔵 Rotate Array by **K** Elements (Left or Right)

---

## 📌 Problem Statement  
Given an integer array, rotate the array by **k positions** in either **left** or **right** direction.

Rotation means:  
- **Right rotation:** elements move toward the right.  
- **Left rotation:** elements move toward the left.

---

## 🧪 Examples

### **Example 1 – Right Rotation**
**Input:**  
`nums = [1, 2, 3, 4, 5, 6, 7], k = 2, direction = right`  

**Output:**  
`[6, 7, 1, 2, 3, 4, 5]`  

**Explanation:**  
- 1 step right → `[7, 1, 2, 3, 4, 5, 6]`  
- 2 steps right → `[6, 7, 1, 2, 3, 4, 5]`

---

### **Example 2 – Left Rotation**
**Input:**  
`nums = [1, 2, 3, 4, 5, 6], k = 2, direction = left`  

**Output:**  
`[3, 4, 5, 6, 1, 2]`  

**Explanation:**  
- 1 step left → `[2, 3, 4, 5, 6, 1]`  
- 2 steps left → `[3, 4, 5, 6, 1, 2]`

---

🔗 **Practice on LeetCode:**  
**Rotate Array** → https://leetcode.com/problems/rotate-array/description/  
*(LeetCode rotates right, but concept remains same.)*

---

# 🟠 Brute Force Approach

## 🔍 Algorithm

### ✅ **Right Rotation**
1. Store the last **k** elements in a temporary array.  
2. Shift the first **n – k** elements to the right.  
3. Place stored **k** elements at the beginning.

### ✅ **Left Rotation**
1. Store the first **k** elements in a temporary array.  
2. Shift remaining **n – k** elements to the left.  
3. Put stored **k** elements at the end.

---

## 💻 Code (C++)
```cpp
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Rotate right by k steps
    void rotateRight(int arr[], int n, int k) {
        if (n == 0) return;
        k = k % n;

        int temp[k];
        for (int i = n - k; i < n; i++) {
            temp[i - n + k] = arr[i];
        }

        for (int i = n - k - 1; i >= 0; i--) {
            arr[i + k] = arr[i];
        }

        for (int i = 0; i < k; i++) {
            arr[i] = temp[i];
        }
    }

    // Rotate left by k steps
    void rotateLeft(int arr[], int n, int k) {
        if (n == 0) return;
        k = k % n;

        int temp[k];
        for (int i = 0; i < k; i++) {
            temp[i] = arr[i];
        }

        for (int i = k; i < n; i++) {
            arr[i - k] = arr[i];
        }

        for (int i = 0; i < k; i++) {
            arr[n - k + i] = temp[i];
        }
    }
};

int main() {
    Solution sol;

    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 2;

    sol.rotateRight(arr, n, k);
    cout << "Right rotation: ";
    for (int i : arr) cout << i << " ";

    cout << "\n";

    int arr2[] = {1, 2, 3, 4, 5, 6, 7};
    sol.rotateLeft(arr2, n, k);
    cout << "Left rotation: ";
    for (int i : arr2) cout << i << " ";
}
```

---

## ⏱️ Complexity
- **Time:** O(n)  
- **Space:** O(k)

---

# 🟢 Optimal Approach (Using Reversal)

## 🧠 Intuition  
Array rotation can be done in O(1) space using **reverse operations**.

### 🔁 **Right Rotation Steps**
1. Reverse whole array  
2. Reverse first **k** elements  
3. Reverse remaining **n – k** elements  

### 🔁 **Left Rotation Steps**
1. Reverse first **k** elements  
2. Reverse remaining elements  
3. Reverse entire array  

---

## 💻 Code (C++)
```cpp
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void reverseArray(vector<int>& nums, int start, int end) {
        while (start < end) {
            swap(nums[start], nums[end]);
            start++;
            end--;
        }
    }

    vector<int> rotateArray(vector<int>& nums, int k, string direction) {
        int n = nums.size();
        if (n == 0 || k == 0) return nums;

        k = k % n;

        if (direction == "right") {
            reverseArray(nums, 0, n - 1);
            reverseArray(nums, 0, k - 1);
            reverseArray(nums, k, n - 1);
        }
        else { // left rotation
            reverseArray(nums, 0, k - 1);
            reverseArray(nums, k, n - 1);
            reverseArray(nums, 0, n - 1);
        }

        return nums;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    int k = 2;

    vector<int> result = sol.rotateArray(nums, k, "right");
    for (int x : result) cout << x << " ";
}
```

---

## ⏱️ Complexity
- **Time:** O(N)  
- **Space:** O(1)

---

# 📝 Key Concepts
- **Array rotation logic**  
- **Using reversal technique**  
- **In-place modification**  
- **Modulo operation for large k**  
- **Left vs Right rotation mapping**

---

# 📚 Related Questions
1. Rotate Array (LeetCode 189)  
2. Rotate Matrix by 90°  
3. Reverse an Array  
4. Cyclically Rotate Array by One (Right)  
5. Move Zeroes to End  

---

# 🏁 Summary
- Brute force uses temp arrays → simple but needs **extra space**.  
- Optimal method uses **3-step reverse technique** → **O(1) space**, fastest and most elegant.  
- Very important pattern for many interview questions.

---

If you want, I can also create a **left rotation by K** standalone note or **matrix rotation** next.
