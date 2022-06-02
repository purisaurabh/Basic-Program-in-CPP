#include <iostream>
#include <algorithm>
using namespace std;

/*
void decimal_to_hexadecimal(int n)
{

    char ans[100];


    int i = 0;
    while (n != 0)
    {

        int temp = 0;
        temp = n % 16;

        if (temp < 10)
        {
            ans[i] = temp + 48;
            i++;
        }

        else
        {
            ans[i] = temp + 55;
            i++;
        }

        n = n / 16;
    }

    for (int j = i - 1; j >= 0; j--)
        cout << ans[j];
}


int main()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;

    decimal_to_hexadecimal(n);

    return 0;
}
*/

/*

string to_hexadecimal(int n)
{
    string str = "0123456789abcdef";
    string ans;
    unsigned int num_2 = (unsigned int)n;

    if(n == 0)
        return "0";

    while( num_2)
    {
        ans += str[num_2 % 16];
        num_2 /= 16;
    }

    reverse(ans.begin() , ans.end());
    return ans;
}


int main()
{
    int n;
    cout << "Enter the number which you have to convert : ";
    cin >> n;

    cout << to_hexadecimal(n);

    return 0;
}
*/

int main()
{
    int a = 1300 ;
    cout << a / 10 << endl;
    if (a % 10 < 100)
    {
        cout << 100 << endl;
    }

    else if (a % 10 > 100)
    {
        cout << a % 10 << endl;
    }

    else if (a % 10 == 100)
    {
        cout << 100 << endl;
    }
}
