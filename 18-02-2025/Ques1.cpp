/*Write a C++ Program to Convert Binry Numbers to Decimal and Vice-versa*/

#include<iostream>
using namespace std;
#include<math.h>

int binaryToDecimal(string Binary)
{
    int decimal_number = 0;
    int size = Binary.size();
    for(int i = 0; i < size; i++) {
        if(Binary[size-i-1] == '1') {
            decimal_number += pow(2, i);
        }
    }
    return decimal_number;
}

string decimalToBinary(int Decimal)
{
    string binary_number = "";
    while(Decimal > 0) {
        binary_number = (Decimal % 2 == 0 ? "0" : "1") + binary_number;
        Decimal /= 2;
    }
    if (binary_number == "")
    {
        return 0;
    }
    else
        return binary_number;
}

int main()
{
    int choice;
    cout<<"Select The Opertion You Want To Perform \n 1.Binary Number to Decimal\n 2.Decimal Number to Binary Number\n";
    cin>>choice;
    if (choice == 1)
    {
        string binary_number;
        cout<<"\nEnter Binary Number:\n";
        cin>>binary_number;
        cout<<"\nAfter Conversion :"<<binaryToDecimal(binary_number)<<endl;
    }
    else if (choice==2)
    {
        int decimal_number;
        cout<<"\nEnter Decimal Number:\n";
        cin>>decimal_number;
        cout<<"\nAfter Conversion :"<<decimalToBinary(decimal_number)<<endl;
    }
    
    
    // cout<<(pow(2,3));
    
    return 0;
}
