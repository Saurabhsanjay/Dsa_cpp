#include<iostream>
#include<vector>
using namespace std;

int main()
{  int arr[]={1,2,3,5,6};
int sizea=5;
int brr[]={2,4,6,8};
int sizeb=5;
vector<int>ans;

for (int i = 0; i < sizea; i++)
{
    ans.push_back(arr[i]);
    /* code */
}
for (int i = 0; i < sizeb; i++)
{
    ans.push_back(brr[i]);
    /* code */
}
for (int i = 0; i < ans.size(); i++)
{
    cout<<ans[i]<<" ";
    /* code */
}


    
    return 0;
}