#include <iostream>
using namespace std;

struct Complex
{
    int real;
    int imag;
};

Complex Add(Complex c1, Complex c2)
{
    struct Complex c3;
    c3.real = c1.real + c2.real;
    c3.imag = c1.imag + c2.imag;
    return c3;
}

Complex Subtract(Complex c1, Complex c2)
{
    struct Complex c3;
    c3.real = c1.real - c2.real;
    c3.imag = c1.imag - c2.imag;
    return c3;
}

Complex Multiply(Complex c1, Complex c2)
{
    struct Complex c3;
    c3.real = c1.real * c2.real - c1.imag * c2.imag;
    c3.imag = c1.real * c2.imag + c1.imag * c2.real;
    return c3;
}

int main()
{
    struct Complex c1, c2, c3;
    cout << "Enter complex number 1: " << endl;
    cin >> c1.real >> c1.imag;
    cout << "Enter complex number 2: " << endl;
    cin >> c2.real >> c2.imag;
    c3 = Add(c1, c2);
    cout << "Sum of both complex numbers: " << c3.real << "+" << c3.imag << "i" << endl;
    c3 = Subtract(c1, c2);
    cout << "Difference of both complex numbers: " << c3.real << "+" << c3.imag << "i" << endl;
    c3 = Multiply(c1, c2);
    cout << "Product of both complex numbers: " << c3.real << "+" << c3.imag << "i" << endl;
    return (0);
}