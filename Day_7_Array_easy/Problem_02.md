# Find second largest and second smallest element in the array 
---
## **Examples**

### **Example 1**
**Input:**
`arr=[1,2,4,7,7,5]`

**Output:**
Second Smallest:`2`
Second Largest:`5`

**Explaination:**
The element are sorted as 1,2,4,5,7,7.
Hence,the second smallest element is 2 , and the second largest element is 5.

### **Example 2**
**Input:**
`arr=[1]`

**Output**
Second Smallest:`-1`
Second Largest:`-1`

**Explaination:**
Since there is only one elemnt in the array ,it is both largest and smallest element .
Therefore , there is no second smallest and second largest element present.

---
# Brute Force 
## Algorithm 
* Sort the array inn ascending order.
* The element at the second index(index 1) is the second smallest element .
* The element at the second index from the end (index len-2) is the second largest element.

**NOTE:** it will work only if all the elements are diffrent

---
## **Code (Brute Force)**
```cpp
#include<bits/stdc++.h>
using namespace std;

// Function to find the second smallest and second largest elements in the array
void getElements(int arr[], int n)
{
    // Edge case when the array has less than 2 elements
    if(n == 0 || n == 1)
        cout << -1 << " " << -1 << endl;  // Print -1 for both second smallest and second largest if the array has less than 2 elements
    
    // Sort the array to easily find the second smallest and second largest elements
    sort(arr, arr + n);

    // Second smallest element is at index 1 after sorting
    int small = arr[1]; 

    // Second largest element is at index n-2 after sorting
    int large = arr[n - 2]; 

    // Output the second smallest and second largest elements
    cout << "Second smallest is " << small << endl;
    cout << "Second largest is " << large << endl;
}

int main()
{
    // Initialize the array with elements
    int arr[] = {1, 2, 4, 6, 7, 5};
    
    // Calculate the size of the array
    int n = sizeof(arr) / sizeof(arr[0]);
    
    // Call the function to find and print the second smallest and second largest elements
    getElements(arr, n);

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
# Better Approach 

## Algorithm 
* Perform a single traversal to find the smallest and largest elements in the array.
* After that, traverse the array again to find the element just greater than the smallest element (this will be the second smallest).
* Similarly, find the element just smaller than the largest element (this will be the second largest).

---
## **Code**
```cpp
#include<bits/stdc++.h>
using namespace std;

// Function to find the second smallest and second largest elements in the array
void getElements(int arr[], int n)
{
    // Edge case: when the array has less than 2 elements
    if (n == 0 || n == 1)
        cout << -1 << " " << -1 << endl;  // If only one element, print -1 for both second smallest and second largest

    // Initialize variables to track the smallest, second smallest, largest, and second largest elements
    int small = INT_MAX, second_small = INT_MAX;
    int large = INT_MIN, second_large = INT_MIN;
    int i;

    // Find the smallest and largest elements in the array
    for (i = 0; i < n; i++) {
        small = min(small, arr[i]);  // Update the smallest element
        large = max(large, arr[i]);  // Update the largest element
    }

    // Find the second smallest and second largest elements
    for (i = 0; i < n; i++) {
        // If the current element is smaller than second_small and not equal to the smallest, update second_small
        if (arr[i] < second_small && arr[i] != small)
            second_small = arr[i];
        
        // If the current element is larger than second_large and not equal to the largest, update second_large
        if (arr[i] > second_large && arr[i] != large)
            second_large = arr[i];
    }

    // Output the second smallest and second largest elements
    cout << "Second smallest is " << second_small << endl;
    cout << "Second largest is " << second_large << endl;
}

int main()
{
    // Initialize the array with elements
    int arr[] = {1, 2, 4, 6, 7, 5};

    // Calculate the size of the array
    int n = sizeof(arr) / sizeof(arr[0]);

    // Call the function to find and print the second smallest and second largest elements
    getElements(arr, n);

    return 0;
}
```
---
 ## **Complexity Analysis**

| Metric | Complexity |
|--------|------------|
| Time   | O(N) |
| Space  | O(1)       |