#include<iostream>
using namespace std;

/*
int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;

    int t1 = 0 ,  t2 = 1, next_term;
    for(int i = 1 ; i <= n ; i++)
    {
        if(i == 1)
        {
            cout << t1 << endl;
            continue;
        }

        if( i == 2)
        {
            cout << t2 << endl;
            continue;
        }

        next_term = t1  + t2;
        t1 = t2;
        t2 = next_term;
        cout << next_term << endl;
    }
    return 0;
}

*/

// or


int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;
    int t1 = 0;
    int t2 = 1;
    int next_term = 0;
    cout << "Fibonacci Series : " << t1 << " " << t2 << " ";
    next_term = t1 + t2;
    while(next_term <= n)
    {
        cout << next_term << " ";
        t1 = t2;
        t2 = next_term;
        next_term = t1 + t2;
   }
}