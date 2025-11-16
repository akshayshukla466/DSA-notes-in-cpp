#include <bits/stdc++.h>
using namespace std;

// Optimal Method: Single Scan
int largestOptimal(int arr[], int n) {
    int maxi = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > maxi)
            maxi = arr[i];
    }
    return maxi;
}

int main() {
    int arr1[] = {2,5,1,3,0};
    int arr2[] = {8,10,5,7,9};

    cout << "Largest (Optimal): " << largestOptimal(arr1, 5) << endl;
    cout << "Largest (Optimal): " << largestOptimal(arr2, 5) << endl;

    return 0;
}
