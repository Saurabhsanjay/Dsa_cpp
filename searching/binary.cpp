#include <iostream>
using namespace std;

int binary(int arr[], int size, int target)
{
    int start = 0;
    int end = size - 1;

    int mid =start+ (end - start) / 2;

    while (start <= end)
    {
        int element = arr[mid];
        if (element == target)
        {
            return mid;
        }
        else if (target < element)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}
int main()
{
    int arr[] = {2, 4, 5, 8, 10, 16};
    int target = 5;

    int size = 6;
    int index = binary(arr, size, target);

    if (index == -1)
    {
        cout << "Notfound" << endl;
    }
    else
    {
        cout << "found" << endl;
    }
    return 0;
}