// find pivot element in an array 
// bug in code 
#include<iostream>
#include<vector>
using namespace std;


int findPivot(vector<int>arr){
int s=0;
int e=arr.size()-1;
int mid=s+(e-s)/2;


while(s<=e){
    if (mid + 1 <= arr.size() && arr[mid] > arr[mid + 1])
    {
        return  mid;
    }
    if (mid - 1 >= arr.size() && arr[mid - 1] > arr[mid])
    {
        return mid-1;
    }

    if(arr[s]>=arr[mid]){
        e=mid-1;
    }
    else{
        s=mid+1;
    }
    mid = s + (e - s) / 2;
}
return -1;
}

int main()
{
    vector<int> v{2,3,4,5,6,7,1};

    int pivot=findPivot(v);
    cout<<"Pivot Number is "<<pivot<<endl;
    return 0;
}