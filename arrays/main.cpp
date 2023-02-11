#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr;
    int ans = (sizeof(arr) / sizeof(char));
    cout << ans << endl;

    cout << arr.size() << endl;
    cout << arr.capacity() << endl;


    //insert
    arr.push_back(5);
    arr.push_back(6);

    //remove 
    arr.pop_back();
    //print
    for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<" ";
        /* code */
    }
    int n;
    cout<<"Value of n"<<endl;

    cin>>n;
    vector<int> brr(n,-101);

    for (int i = 0; i < brr.size(); i++)
    {cout<<brr[i]<<" ";
        /* code */
    }
    cout<<endl;
    
    return 0;
}