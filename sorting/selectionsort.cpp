#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int>arr{5,4,3,2,1};
int n=arr.size();
    for (int i = 0; i < n; i++)
    {
        int min=i;

        for (int j = i+1; j < n; j++)
        {
            if(arr[j]<arr[min]){
                min=j;
            }
        }
            swap(arr[i],arr[min]);
        cout<<arr[i]<<endl;
    }
    
    return 0;
}