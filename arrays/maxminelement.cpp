#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

void minmax(int arr[][3], int rows, int cols, int &min, int &max)
{
    max = INT_MIN;
    min = INT_MAX;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (arr[i][j] > max)
            {
                max = arr[i][j];
            }
            if (arr[i][j] < min)
            {
                min = arr[i][j];
            }
        }
    }
}

int main()
{
    int rows = 3;
    int cols = 3;
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int min, max;
    minmax(arr, rows, cols, min, max);
    cout << "Min: " << min << endl;
    cout << "Max: " << max << endl;
    return 0;
}
