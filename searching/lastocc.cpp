#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
// find first occurance in an elements;

int firstocc(vector<int> arr, int target)
{
    int s = 0;
    int e = arr.size();
    int mid = (s + e) / 2;
    int ans = -1;

    while (s <= e)
    {
        if (arr[mid] == target)
        {
            ans = mid;
            s = mid + 1;
        }
        else if (target < arr[mid])
        {
            e = mid - 1;
        }
        else if (target > arr[mid])
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int main()
{
    vector<int> v{1, 3, 7,7,7,7,7,7,7,7,7, 4, 4, 4, 6, };
    int target = 7;
    int indexoffirst = firstocc(v, target);
    cout << "ans is " << indexoffirst << endl;
   auto ans2=lower_bound(v.begin(),v.end(),target);
   cout<<"Ans is " << *ans2<<endl;
   
    return 0;
}