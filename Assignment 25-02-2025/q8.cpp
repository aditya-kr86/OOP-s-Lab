// Write a C++ Program to Find Fibonacci Number using Iterative and Recursive
#include <iostream>
using namespace std;

// Recursive function to find the nth Fibonacci number
int fibonacciRecursive(int n) {
    if (n <= 1) 
        return n;
    return fibonacciRecursive(n - 1) + fibonacciRecursive(n - 2);
}

// Iterative function to find the nth Fibonacci number
int fibonacciIterative(int n) {
    if (n <= 1)
        return n;

    int a = 0, b = 1, fib;
    for (int i = 2; i <= n; i++) {
        fib = a + b;
        a = b;
        b = fib;
    }
    return fib;
}

int main() {
    int n, choice;
    
    cout << "Enter the position (n) for Fibonacci Number: ";
    cin >> n;
    
    if (n < 0) {
        cout << "Please enter a non-negative number." << endl;
        return 0;
    }

    cout << "Choose method to find Fibonacci Number:\n";
    cout << "1. Recursive Method\n";
    cout << "2. Iterative Method\n";
    cout << "Enter your choice (1 or 2): ";
    cin >> choice;

    int result;
    switch (choice) {
        case 1:
            result = fibonacciRecursive(n);
            cout << "Fibonacci Number at position " << n << " (Recursive) is: " << result << endl;
            break;
        case 2:
            result = fibonacciIterative(n);
            cout << "Fibonacci Number at position " << n << " (Iterative) is: " << result << endl;
            break;
        default:
            cout << "Invalid choice! Please enter 1 or 2." << endl;
    }

    return 0;
}
