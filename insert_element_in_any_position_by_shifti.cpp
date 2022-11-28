#include<iostream>
using namespace std;

int main()
{
    int arr[] = {1,2,3,4,5,6,9,10,11,12};

    int x = 8;
    int length = 9;
    int i = length-1;
    while( arr[i] > x)
    {
        arr[i+1] = arr[i];
        i--;
    }

    arr[i+1] = x;

    int size = sizeof(arr)/sizeof(arr[0]);
    for(int j = 0; j < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}