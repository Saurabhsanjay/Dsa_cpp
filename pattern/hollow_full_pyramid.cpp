#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col <= n - row - 2; col++)
        {
            cout << " ";
            /* code */
        }
        for (int col = 0; col < 2 * row + 1; col++)
        {
            if (col == 0)
            {
                cout << "*";
                /* code */
            }
            else if (col == 2 * row)
            {
                cout << "*";
                /* code */
            }
            else
            {
                cout << " ";
            }

            /* code */
        }
        cout << endl;
        /* code */
    }

    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < row; col++)
        {
            cout << " ";
            /* code */
        }
        for (int col = 0; col < 2 * n - 2 * row - 1; col++)
        {
            if (col == 0 || col == 2 * n - 2 * row - 2

            )
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
            /* code */
        }
        cout << endl;

        /* code */
    }

    return 0;
}