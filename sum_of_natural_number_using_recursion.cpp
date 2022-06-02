#include<iostream>
using namespace std;

int print_sum(int n)
{
    if(n != 0)
        return n + print_sum(n-1);
    return 0;
}

int main()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;
    cout << "Sum is : " << print_sum(n);
    return 0;
}