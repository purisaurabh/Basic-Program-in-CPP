#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number to find : ";
    cin >> n;
    int factorial = 1;
    if(n < 0)
    {
        cout << "factorial of negative number does not exits ";
    }

    else
    {
        for(int i =  1 ; i <= n ; i++)
        {
                factorial *= i;
        }
    }


    cout << "Fctorial of given number is : " << factorial;
    return 0;
}