#include<iostream>
#include<vector>
using namespace std;
// find unique elements in an array 

int findUnique(vector<int>arr){
int ans=0;
for (int i = 0; i < arr.size(); i++)
{
    ans=ans^arr[i];
    /* code */
}
return ans;
}

int main()
{
    int n;
    cout<<"Enter the size of array";
    cin>>n;
vector<int>arr(n);
    for (int i = 0; i < arr.size(); i++)
    {
        cin>>arr[i];
        /* code */
    }
    
int uniqueelemnts=findUnique(arr);

cout<<"Unique elemetns is"<<uniqueelemnts<<endl;
    
    return 0;
}