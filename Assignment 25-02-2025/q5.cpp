// Write a C++ Program to calculate Factorial of a Number Using Recursion
#include <iostream>
using namespace std;
int factorial(int number)
{
    if (number == 0)
    {
        return 1;
    }
    else
        return number * factorial(number - 1); 
}
int main()
{
    int number;
    cout<<"Enter a Number of Which You Want To Find Factorial: ";
    cin>>number;
    cout<<"The Factorial of Number "<<number<<" is "<< factorial(number);
    return 0;
}
