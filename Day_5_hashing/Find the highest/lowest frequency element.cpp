/*Problem Statement: Given an array of size N. Find the highest and lowest frequency element.

Pre-requisite: Hashing Theory and  Counting frequencies of array elements

Examples:

Example 1:
Input: array[] = {10,5,10,15,10,5};
Output: 10 15
Explanation: The frequency of 10 is 3, i.e. the highest and the frequency of 15 is 1 i.e. the lowest.
*/



#include <bits/stdc++.h>
using namespace std;

void Frequency(int arr[], int n)
{
    unordered_map<int, int> map;

    for (int i = 0; i < n; i++)
        map[arr[i]]++;

    int maxFreq = 0, minFreq = n;
    int maxEle = 0, minEle = 0;
    // Traverse through map to find the elements.
    for (auto it : map) {
        int count = it.second;
        int element = it.first;

        if (count > maxFreq) {
            maxEle = element;
            maxFreq = count;
        }
        if (count < minFreq) {
            minEle = element;
            minFreq = count;
        }
    }

    cout << "The highest frequency element is: " << maxEle << "\n";
    cout << "The lowest frequency element is: " << minEle << "\n";
}

int main()
{
    int arr[] = {10, 5, 10, 15, 10, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    Frequency(arr, n);
    return 0;
}
/*We can use a map of value and frequency pair, in which we can easily update the frequency of an element if it is already present in the map, if it is not present in the map then insert it in the map with frequency as 1. After completing all the iterations, we will find the element with the highest frequency and the element with the lowest frequency.

The steps are as follows:

Take a unordered_map<int, int> / HashMap of <Integer, Integer> pair.
Use a for loop to iterate the array.
If the element is not present in the map then insert it with frequency 1, otherwise increase the existing frequency by 1.
After visiting the whole array, we will find the element with the highest frequency and the element with the lowest frequency by iterating the map.*/









//Brute-Force approach(Using two loops): 
/*Make a visited array of type boolean.
Use the first loop to point to an element of the array.
Initialize the variable count to 1.
Make that index true in the visited array.
Run the second loop, if we find the element then mark the visited index true and increase the count.
If the visited index is already true then skip the other steps.
After step 5, we will keep a track of the element with the highest frequency and the lowest frequency.*/

void countFreq(int arr[], int n)
{
    vector<bool> visited(n, false);
    int maxFreq = 0, minFreq = n;
    int maxEle = 0, minEle = 0;

    for (int i = 0; i < n; i++) {

        // Skip this element if already processed
        if (visited[i] == true)
            continue;

        // Count frequency
        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                visited[j] = true;
                count++;
            }
        }
        if (count > maxFreq) {
            maxEle = arr[i];
            maxFreq = count;
        }
        if (count < minFreq) {
            minEle = arr[i];
            minFreq = count;
        }
    }
    cout << "The highest frequency element is: " << maxEle << "\n";
    cout << "The lowest frequency element is: " << minEle << "\n";
}

