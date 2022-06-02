#include<iostream>
using namespace std;

int main()
{
    int a = 5 , b = 7;

    cout << "before Swapping " << endl;
    cout << " a is : " <<  a << endl;
    cout << "b is : " << b << endl;

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    cout << "After Swapping : " << endl;
    cout << "a is : " << a << endl;
    cout << " b is : " << b << endl; 
    return 0;
}