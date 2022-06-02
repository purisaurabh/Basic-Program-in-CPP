#include<iostream>
using namespace std;

int factorial(int n)
{
    if(n != 0)
        return n * factorial(n-1);

    return 1;
}

int main()
{
    int n ;
    cout << "Enter the number which you want to find the factorial of the that number : ";
    cin >> n;

    cout << "Factorial of " << n << " is " << factorial(n) ;
    return 0;
}