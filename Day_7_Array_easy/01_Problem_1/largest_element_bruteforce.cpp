#include <bits/stdc++.h>
using namespace std;

// Brute Force Method: Sorting
int largestBySorting(vector<int>& arr) {
    sort(arr.begin(), arr.end());
    return arr.back(); // last element is largest
}

int main() {
    vector<int> arr1 = {2,5,1,3,0};
    vector<int> arr2 = {8,10,5,7,9};

    cout << "Largest (Brute Force): " << largestBySorting(arr1) << endl;
    cout << "Largest (Brute Force): " << largestBySorting(arr2) << endl;

    return 0;
}

