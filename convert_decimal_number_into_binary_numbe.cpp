#include <iostream>
#include <cmath>
using namespace std;


long long int convert_decimal_to_binary (int n)
{
    long long binary = 0;
    int rem;
    int i = 1;
    while(n != 0)
    {
        rem = n % 2;
        n = n / 2;

        binary += rem * i;
        i *= 10;
    }

    return binary;
}

int main()
{
    long long int n;
    cout << "Enter the Decimal Number : ";
    cin >> n;
    int binary = convert_decimal_to_binary(n); 
    cout << n << " in decimal number "  << binary << " in binary number " << endl;
}








































