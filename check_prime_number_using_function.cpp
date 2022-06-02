#include<iostream>
using namespace std;


bool prime_number(int n)
{
    bool is_prime = false;

    if(n == 0 || n == 1)
    {
        is_prime = false;
    }

    
    for(int i = 2 ; i <= n/2 ; i++)
    {
        if(n % i == 0)
        {
            is_prime = false;
            break;
        }
    }
    is_prime = true;
}


int main()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;
    
    if(prime_number(n))
    {
        cout << "The given number is prime number ";
    }

    else
    {
        cout << "The given number is not a prime number ";
    }


    return 0;
}