#include <iostream>
#include <vector>
using namespace std;
// sq root of a number using binary search

int sqRootNumber(int n)
{
    int target = n;
    int s = 0;
    int e = n;
    int mid = s + (e - s) / 2;
    int ans = -1;

    while (s <= e)
    {

        if (mid * mid == target)
        {
            return mid;
        }
        if (mid * mid > target)
        {
            e = mid - 1;
        }
        else
        {
            ans = mid;
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int main()
{
    
    int target;
    cin >> target;
    int sqroot = sqRootNumber(target);
    cout << "Square root is " << sqroot << endl;
    int prescision;
    cout<<"Enter the floating digits in prescision"<<endl;
    double step=0.1;
    double final=sqroot;
    for (int i = 0; i < prescision; i++)
    {
        for (double j = sqroot; j*j <=target; j=j+step)
        {
            /* code */
            sqroot=j;
        }
        step=step/10;
        /* code */
    }
    cout<<final<<endl;
    
    return 0;
}