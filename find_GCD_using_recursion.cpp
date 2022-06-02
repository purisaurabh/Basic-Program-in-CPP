#include<iostream>
using namespace std;

int G_C_D(int n1 , int n2)
{
    if(n2 != 0)
        return G_C_D(n2 , n1 % n2);

    else
        return n1;

}
int main()
{
    int n1 , n2;
    cout << "Enter two number : ";
    cin >> n1 >> n2;

    cout << "GCD of " << n1 << " and " << n2 << " is " << G_C_D (n1 , n2);
    return 0;
}