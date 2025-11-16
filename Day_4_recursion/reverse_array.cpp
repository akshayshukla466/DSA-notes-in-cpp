#include<iostream>
using namespace std;
void reverse(int arr[], int i, int n) {
    if (i>=n/2) return;   
    swap(arr[i], arr[n - i - 1]); // swap the elements
    reverse(arr, i + 1, n); // recursive call to reverse the next pair
}   
int main(){
    int n ;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for(int i =0; i<n ;i++)
    cin >> arr[i]; // input the elements of the array
    reverse(arr, 0, n); // call the reverse function
    cout << "Reversed array: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " "; // print the reversed array
    }   
}