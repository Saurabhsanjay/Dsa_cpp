#include<iostream>
using namespace std;

int main()
{
    int n=528;
    // cin>>n;
    
    while(n!=0){
      int rem=n%10;
      cout<<rem<<" ";
     n= n/10;
    }
   cout<<endl;
    return 0;
}