// Write a C++ Program to Check Leap Year
#include <iostream>
using namespace std;

int main()
{
    int year;
    cout<<"Enter a Year Of Which You Want To Check: LEAP or NOT LEAP:\n";
    cin>>year;
    if ((year%4 == 0 && year%100 != 0) || year%400 == 0)
    {
        cout<<year <<" is a LEAP YEAR";
    }
    else
    {
        cout<<year <<" is NOT a LEAP YEAR";
    }
    return 0;
}
