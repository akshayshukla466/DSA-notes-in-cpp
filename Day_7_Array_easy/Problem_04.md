# 🟢 Remove Duplicates In-Place from Sorted Array

---

## 📌 Problem Statement
Given an integer array **sorted in non-decreasing order**, remove the duplicates **in-place** such that each unique element appears only once. The relative order of the elements should be kept the same.

If there are **k elements** after removing the duplicates, then the first **k elements** of the array should hold the final result.  
It does not matter what you leave beyond the first k elements.

🔗 **Practice on LeetCode:** [Remove Duplicates from Sorted Array](https://leetcode.com/problems/remove-duplicates-from-sorted-array/description/)

---

## 🧩 Brute Force Approach

### Algorithm
- Since we need to store only unique elements, we can use the **set** data structure.  
- Insert all elements of the array into the set (set allows only **one occurrence** of each element).  
- Number of unique elements = size of the set.  
- Traverse the set and fill the first **k indices** of the array with elements from the set.

### Code (C++)
```cpp
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        unordered_set<int> seen;
        int index = 0;

        for (int num : nums) {
            if (seen.find(num) == seen.end()) {
                seen.insert(num);
                nums[index++] = num;
            }
        }
        return index;
    }
};

int main() {
    vector<int> nums = {0,0,1,1,1,2,2,3,3,4};
    Solution sol;
    int k = sol.removeDuplicates(nums);

    cout << "k = " << k << "\nArray after removing duplicates: ";
    for (int i = 0; i < k; i++) cout << nums[i] << " ";
    cout << endl;
}
```

**Complexity Analysis:**  
- ⏱️ Time: O(N)  
- 🗄️ Space: O(N)

---

## 🚀 Optimal Approach

### Algorithm
- Instead of using a set, use **two pointers** to optimize space.  
- Since array is sorted, **all duplicates are adjacent**.  
- Start at the first position (always part of unique list).  
- Compare current element with last unique element:  
  - If same → skip  
  - If different → move next to last unique and place it  
- Continue until all elements are checked.  
- First part of array now contains all unique elements in original order.

### Code (C++)
```cpp
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) return 0;

        int i = 0; // last unique element index
        for (int j = 1; j < nums.size(); j++) {
            if (nums[j] != nums[i]) {
                i++;
                nums[i] = nums[j];
            }
        }
        return i + 1;
    }
};

int main() {
    vector<int> nums = {0,0,1,1,1,2,2,3,3,4};
    Solution sol;
    int k = sol.removeDuplicates(nums);

    cout << "Unique count = " << k << "\nArray after removing duplicates: ";
    for (int x = 0; x < k; x++) cout << nums[x] << " ";
    cout << endl;
}
```

**Complexity Analysis:**  
- ⏱️ Time: O(N)  
- 🗄️ Space: O(1)

---

## 📝 Key Concepts
> 💡 If you want to **try this problem yourself** on LeetCode, check the link above before looking at the solution.  

- **Two Pointer Technique:** Efficiently track last unique element and current element.  
- **In-place modification:** Update the array without extra space.  
- **Sorted array property:** Adjacent duplicates simplify the problem.  

---

## 📚 Related Questions
1. Remove Duplicates from Unsorted Array  
2. Move Zeroes to End (In-place)  
3. Partition Array by Parity  

---

## 🏁 Summary
- Sorted array → duplicates adjacent → **two-pointer solution is best**.  
- Brute force (set) works but uses extra space.  
- Key trick: **update in-place**, maintain relative order.  
