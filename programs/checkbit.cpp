#include<iostream>
using namespace std;

int main()
{
    int n=3;
    int ans=0;
    while(n!=0){
        if(n&1){
            ans++;
        }
        n=n>>1;
    }
    cout<<"number of set bits is "<<" "<<ans<<endl;
    return 0;
}