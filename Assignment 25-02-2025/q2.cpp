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







// Write a C++ Program to Add Complex Numbers by Passing Structure to a function











// Write a C++ Program to check Armstrong Number









// Write a C++ Program to Find Fibonacci Number using Iterative and Recursive







// Write a C++ Program to Check Whether a Character is Vowel or Consonant
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





// Write a C++ Program to Find ASCII Value of a Character
#include <iostream>
using namespace std;

int main()
{
    char c;
    cout<<"Enter a Character\n";
    cin>>c;
    cout<<"The ASCII value of "<< c <<" is "<<int(c);
    return 0;
}







