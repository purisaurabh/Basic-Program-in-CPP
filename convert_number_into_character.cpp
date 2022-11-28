#include <bits/stdc++.h>
using namespace std;

void reverse(string arr[]  , int size) 
{
    int i = 0;
    int j = size-1;

    while( i <= j)
    {
        swap(arr[i] , arr[j]);
        i++;
        j--;
    }

}

int main()
{
    int n;
    cout << "The number is : ";
    cin >> n;

    string arr[10] = {"zero" , "one" , "two" , "three" , "four" , "five" , "six" , "seven" , "eight" , "nine"};
    string ans[10];
    int i = 0;
    while(n > 0)
    {
        int rem = n%10;
        ans[i] = arr[rem];
        n = n / 10;
        i++;
    }

    int size = sizeof(ans)/sizeof(ans[0]);

    reverse(ans , size);

    for(int j = 0 ; j < size ; j++)
    {
        cout << ans[j] << " ";
    }

    cout << endl;
    return 0;
}