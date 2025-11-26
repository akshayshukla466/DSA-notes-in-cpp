# Remove Duplicates In-Place from Sorted Array

---

## Problem Statement
Given an integer array sorted in non-decreasing order, remove the duplicates in-place such that each unique element appears only once. The relative order of the elements should be kept the same.

If there are k elements after removing the duplicates, then the first k elements of the array should hold the final result. It does not matter what you leave beyond the first k elements.

---

## Brute Force Approach
**Algorithm:**  
- Use a set to store only unique elements.  
- Insert all elements into the set (duplicates will be removed automatically).  
- Traverse the set and overwrite the first k elements of the array with elements from the set.

**Code (C++):**
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
- Time: O(N)  
- Space: O(N)

---

## Optimal Approach
**Algorithm:**  
- Use two pointers since the array is sorted and duplicates are adjacent.  
- `i` points to last unique element, `j` scans the array.  
- If `nums[j] != nums[i]`, increment `i` and place `nums[j]` at `nums[i]`.  
- After the scan, return `i + 1` as the number of unique elements.

**Code (C++):**
```cpp
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) return 0;

        int i = 0;
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
- Time: O(N)  
- Space: O(1)

---

## 📝 Key Concepts
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
- Sorted array → duplicates adjacent → two-pointer solution best.  
- Brute force (set) works but uses extra space.  
- Key trick: update in-place, maintain relative order.  
