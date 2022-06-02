#include <iostream>
using namespace std;

// Important Solution

vector<vector<int>> generate(int row)
{
    vector<vector<int>> ans;
    for (int i = 0; i < row; i++)
    {
        vector<int> row(i + 1, 1);

        for (int j = 1; j < i; j++)
        {
            row[j] = ans[i - 1][j] + ans[i - 1][j - 1];
        }

        ans.push_back(row);
    }

    return ans;
}






















/*
Time complexity will be the O(n^2)
and having space ccomplexity will be the O(n);
*/

vector<vector<int>> generate(int row)
{
    vector<vector<int>> ans;
    vector<int> prev;
    int k = 0;
    for (int i = 0 i < row; i++)
    {
        vector<int> a(i + 1);
        a[0] = 1; // first value
        a[i] = 1; // last value

        for (int j = 1; j < i; j++)
        {
            a[j] = prev[k] + prev[k + 1];
            k++;
        }

        prev = a;
        ans.push_back(prev);
        k = 0;
    }

    return prev;
}




























int main()
{
    int row;
    cout << "Enter the number the row : ";
    cin >> row;
    int value = 1;
    for (int i = 0; i < row; i++)
    {
        for (int space = 1; space <= row - i; space++)
        {
            cout << " ";
        }

        for (int j = 0; j < i; j++)
        {
            if (j == 0 || i == 0)
            {
                value = 1;
            }

            else
            {
                value = value * (i - j + 1) / j;
            }

            cout << value << " ";
        }

        cout << endl;
    }
}
































vector<vector<int>> pt;
for (int i = 0; i <= rowIndex; i++)
{
    vector<int> row(i + 1, 1);

    for (int j = 1; j < i; j++)
        row[j] = pt[i - 1][j - 1] + pt[i - 1][j]; 

    pt.push_back(row);
}

return pt[rowIndex];