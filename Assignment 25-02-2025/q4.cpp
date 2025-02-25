// Write a C++ Program to Reverse a Number
#include <iostream>
using namespace std;

int main()
{
    int remainder, number,reversed_number = 0;
    cout<<"Enter a Number to Which You Want to Reverse\n";
    cin>>number;
    while (number > 0)
    {
        remainder =  number%10 ;
        reversed_number = reversed_number * 10 + remainder;
        number = number/10;
    }
    cout<<"The Reversed Number is "<<reversed_number;
    return 0;
}
