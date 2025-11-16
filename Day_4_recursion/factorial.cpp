#include <iostream>
using namespace std;

// Function to calculate factorial of a number
int factorial(int X) {
    int ans = 1;

    // Loop from 1 to X to compute factorial
    for (int i = 1; i <= X; i++) {
        ans = ans * i;
    }

    // Return the final result
    return ans;
}

int main() {
    // Input value for which factorial is to be calculated
    int X = 5;

    // Call the factorial function and store the result
    int result = factorial(X);

    // Print the result
    cout << "The factorial of " << X << " is " << result;

    return 0;
}
/*#include <bits/stdc++.h>
using namespace std;

// Recursive function to calculate factorial of a number
int factorial(int n) {
    // Base case: factorial of 0 is 1
    if (n == 0) {
        return 1;
    }

    // Recursive case: n * factorial of (n-1)
    return n * factorial(n - 1);
}

int main() {
    // Define the number to compute factorial
    int n = 3;

    // Call the factorial function and print the result
    cout << factorial(n) << endl;

    return 0;
}*/