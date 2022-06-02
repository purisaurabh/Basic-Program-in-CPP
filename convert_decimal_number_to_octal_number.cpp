#include<iostream>
using namespace std;

int convert_to_decimal_to_octal(int n)
{
    int rem;
    int i = 0;
    int octal = 0;

    while( n != 0)
    {
        rem = n % 8;
        n = n / 8;

        octal += rem * i;
        i = i * 10;
    }

    return octal;
}

int main()
{
    int n;
    cout << "Enter Decimal Number : ";
    cin >> n;

    int d = convert_to_decimal_to_octal(n);

    cout << "The decimal number is " << n << " then respective octal number is : " << d;
    return 0;
}