#include<bits/stdc++.h>
using namespace std;


int convert_to_octal(int n)
{
    int decimal = 0;
    int i = 0;
    int rem;
    while(n != 0)
    {
        rem = n % 10;
        n  = n / 10;

        decimal += rem*pow(8 , i);
        i++;
    }

    return decimal;
}


int main()
{
    int n;
    cout << "Enter octal number : ";
    cin >> n;


    int o = convert_to_octal(n);
    
    cout << "The octal number is " << n << " and the resptive decimal number is " << o ;
    return 0;
}