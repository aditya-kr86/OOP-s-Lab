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


// Q.6 Write a C++ Program to Add Complex Numbers by Passing Structure to a function











// Q.7 Write a C++ Program to check Armstrong Number









// Q.8 Write a C++ Program to Find Fibonacci Number using Iterative and Recursive







// Q.9 Write a C++ Program to Check Whether a Character is Vowel or Consonant
#include <iostream>
using namespace std;

int main()
{
    char c;
    cout<<"Enter a Character\n";
    cin>>c;
    int ascii_value = int(c);
    int vowel_values[10] = {65,97, 69,101, 73,105, 79,111, 85,117};
    for(int i = 0; i < 10; i++)
    {
        if(vowel_values[i]==ascii_value)
        {
            cout<<"Enter Character is a Vowel";
            break;
        }
        else
        {
            cout<<"Enter Character is NOT a Vowel";
            break;
        }
    }
    return 0;
}
