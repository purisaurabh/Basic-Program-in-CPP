#include<bits/stdc++.h>
using namespace std;


int check_prime(int n)
{
    bool is_prime = true;

    // 0 and 1 is not prime number 
    if(n == 0 || n == 1)
    {
        is_prime = false;
    }

    for(int j = 2; j <= n / 2 ; j++)
    {
        if(n % j == 0)
        {
            is_prime = false;
            break;
        }
    }

    return is_prime;
}

int main()
{
    int n1 ;
    int n2;
    bool flag;

    cout << "Enter the two positive number : ";
    cin >> n1 >> n2;


    // swap the number if first number is greather thn second number
    if(n1 > n2)
    {
        n2 = n1 + n2;
        n1 = n2 - n1;
        n2 = n2 - n1;
    }
    

    cout << "Prime Number between " << n1 << " and "  << n2 << " is :";

    for(int i = n1 + 1; i < n2 ; i++) // we have to print the prime number between two number we do not include these number
    {
        flag = check_prime(i);

        if(flag)
        {
            cout << i << " ";
        }
    }
}


