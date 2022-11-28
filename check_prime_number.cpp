#include <iostream>
using namespace std;

int main()
{

    int a = 5;
    // bool check = true;
    if(a == 0 || a == 2)
    {
        cout << "This is prime";
        return 0;
    }

    for(int i = 2; i < a/2 ; i++)
    {
        if(a % i == 0)
        {
            cout << "This is not prime";
            return 0;
        }
    }

    cout << "This is prime";



    
}
