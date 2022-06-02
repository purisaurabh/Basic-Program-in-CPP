#include <iostream>
using namespace std;




/*

*
* *
* * *
* * * *
* * * * *

*/

/*
int main()
{
    int row;
    cout << "Enter the number of row : ";
    cin >> row;

    for(int i = 0 ; i < row ; i++)
    {
        for(int j = 0; j < i ;j++)
        {
            cout << "*" << " ";
        }

        cout << endl;
    }
    return 0;
}
*/















/*
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
*/

/*
int main()
{
    int row;
    cout << "Enter the number of rows : ";
    cin >> row;

    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }

        cout << endl;
    }

}

*/























/*
A
B B
C C C
D D D D
E E E E E

*/
/*
#include <iostream>
using namespace std;
int main()
{
    char input, alphabet = 'A';

    cout << "Enter the uppercase character you want to print in the last row: ";
    cin >> input;

    for(int i = 1; i <= (input-'A'+1); ++i)
    {
        for(int j = 1; j <= i; ++j)
        {
            cout << alphabet << " ";
        }
        ++alphabet;

        cout << endl;
    }
    return 0;
}
*/

























/*

* * * * *
* * * *
* * *
* *
*
*/

/*
#include <iostream>
using namespace std;

int main()
{
    int rows;

    cout << "Enter number of rows: ";
    cin >> rows;

    for(int i = rows; i >= 1; --i)
    {
        for(int j = 1; j <= i; ++j)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}
*/













/*
1 2 3 4 5
1 2 3 4 
1 2 3
1 2
1
*/

/*
int main()
{
    int row;
    cout << "Enter the number of row : ";
    cin >> row;

    for (int i = row; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }

        cout << endl;
    }
}
*/
















/*

        *
      * * *
    * * * * *
  * * * * * * *
* * * * * * * * *

*/

/*
int main()
{
    int  row ;
    cout << "Enter the number of row : ";
    cin >> row;
    int k = 0;
    for(int i = 1 ; i <= row ; i++, k = 0)
    {
        for(int space = 1 ; space <= row - i ; space++)
        {
            cout << " ";
        }

        while(k != 2*i - 1)
        {
            cout << "*";
            k++;
        }
        cout << endl;
    }
}
*/

