#include <bits/stdc++.h>
using namespace std;

struct node
{
    int salary;
    string name;
};

static bool compare(node x, node y)
{
    if (x.salary == y.salary)
        return x.name < y.name;

    return x.salary < y.salary;
}

void sort_compare_function(node arr[], int n)
{
    sort(arr, arr + n, compare);
}

int main()
{

    int n;
    cin >> n;
    node arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].name >> arr[i].salary;
    }

    sort_compare_function(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i].name << " " << arr[i].salary << " ";
    }

    cout << endl;
}
