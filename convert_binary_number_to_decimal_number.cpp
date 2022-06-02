#include<iostream>
#include <cmath>
using namespace std;

int convert_into_decimal(long long n)
{
    int rem = 0 , i = 0;
    int decimal = 0;
    while( n != 0)
    {
        rem = n % 10;
        n = n / 10;
        decimal += rem * pow( 2 , i);
        i++;
    }

    return decimal;
}

int main()
{
    long long n;
    cout << "Enter the binary number : ";
    cin >> n;

    cout << n << " in binary is " << convert_into_decimal(n) << " in decimal ";
 
    return 0;
}