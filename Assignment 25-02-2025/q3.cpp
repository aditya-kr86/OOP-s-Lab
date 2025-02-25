// Write a C++ Program to Find GCD.
#include <iostream>
#include<math.h>
using namespace std;

int main()
{
    int first_number, second_number;

    cout<<"Enter Two Number of Which You Want To find GCD\n";
    cin>>first_number>>second_number;
    int greater_number = max(first_number, second_number);
    int n = greater_number/2;
    int gcd;
    for (int i = 2; i <= n; i++)
    {
        if (first_number % i == 0 && second_number % i == 0)
        {
            gcd = i;
        }   
    }
    cout<<"The GCD of "<<first_number<<" and "<<second_number<<" is "<<gcd<<"\n";

    
    return 0;
}
