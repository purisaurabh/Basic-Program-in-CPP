#include<iostream>
using namespace std;

int calculate_power(int base , int power)
{   
    if(power != 0)
    {
        return base*calculate_power(base , power-1);
    }

    else
    {
        return 1;
    }
}


int main()
{

    int base ;
    int power;
    int result;

    cout << "Enter the base value : ";
    cin >> base;

    cout << "Enter the power number : ";
    cin >> power;

    result = calculate_power(base , power);

    cout << base << "^" << power << " = " << result;    
    return 0;
}