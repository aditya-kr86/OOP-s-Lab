// Write a C++ Program to Add Complex Numbers by Passing Structure to a function
#include <iostream>
using namespace std;

struct Complex {
    float real;
    float imag;
};

Complex addComplex(Complex c1, Complex c2) {
    Complex sum;
    sum.real = c1.real + c2.real;
    sum.imag = c1.imag + c2.imag;
    return sum;
}

int main() {
    Complex num1, num2, result;

    cout << "Enter real and imaginary parts of first complex number: ";
    cin >> num1.real >> num1.imag;

    cout << "Enter real and imaginary parts of second complex number: ";
    cin >> num2.real >> num2.imag;

    result = addComplex(num1, num2);

    cout << "Sum of Complex Numbers: " << result.real;
    if (result.imag >= 0)
        cout << " + " << result.imag << "i" << endl;
    else
        cout << " - " << -result.imag << "i" << endl;

    return 0;
}
