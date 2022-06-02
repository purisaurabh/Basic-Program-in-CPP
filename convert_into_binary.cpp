#include <iostream>
using namespace std;

int main()
{

    cout << "Enter the number which you have to convert into binary :" ;
    cin >> m;
    int sum = 0;
    int value = 1;

    while (m)
    {
        int rem = m & 1;
        sum = sum + rem * value;
        value = value * 10;
        m = m >> 1;
    }

    cout << sum;
    return 0;
}