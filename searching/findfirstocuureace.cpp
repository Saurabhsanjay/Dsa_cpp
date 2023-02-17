#include<iostream>
using namespace std;
#include<vector>
// find first occurance in an elements;

int firstocc(vector<int>arr, int target){
int s=0;
int e=arr.size();
int mid=(s+e)/2;
int ans=-1;

while(s<=e){
    if(arr[mid]==target){
        ans=mid;
        e=mid-1;
    }
    else if(target<arr[mid]){
       s=mid-1;
    }
    else if(target>arr[mid]){
       s = mid + 1;
    }
    mid=s+(e-s)/2;
}
return ans;

}

int main()
{
    vector<int> v{1,3,4,4,4,4,6,7};
int target=4;
    int indexoffirst=firstocc(v,target);
    cout<<"ansis"<<indexoffirst<<endl;
    
    return 0;
}