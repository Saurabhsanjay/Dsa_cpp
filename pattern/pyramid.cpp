//   *
//   **
//  ***
//  ****
// ******

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    
for(int row=n;row>=0;row--){
    for(int col=0;col<n-row;col++){
        cout<<" ";
    }
    for(int i=row;i>=1;i--){
        cout<<"* ";
    }
    cout<<endl;
}
    return 0;
}

