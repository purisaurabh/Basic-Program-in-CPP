#include <bits/stdc++.h>
using namespace std;


int find_floor_and_ceil_value(int arr[] , int n, int x)
{
    int ceil_of_x = 1e9;
    int floor_of_x = ;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] <= x)
        {
            floor_of_x = max(floor_of_x, arr[i]);
        }

        if (arr[i] >= x)
        {
            ceil_of_x = min(ceil_of_x, arr[i]);
        }
    
    }


    if (ceil_of_x == 1e9)
    {
        ceil_of_x = -1;
    }

    if (floor_of_x == -1e9)
    {
        floor_of_x = -1;
    }

    return floor_of_x , ceil_of_x;

}

int main()
{
    int n;
    cin >> n;

    int arr[n];

    for(int i = 0 ; i < n ; i++)
    {
        cin >> arr[i];
    }

    cout << find_floor_and_ceil_value(arr , n , 7);
    // ans should be 6 and 8 
}


