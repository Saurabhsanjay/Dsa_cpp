#include <iostream>
using namespace std;

// *
// **
// ***
// ****
// *****
// ******

// *
// **
// ***
// ****
// *****
// ******

int main(){
    int rowcount,colcount;
    cin>>rowcount,colcount;

for(int row=0;row<rowcount;row++){
    for(int col=0;col<row+1;col++){
        cout<<"*";
    }
    cout<<endl;
}
    

}







//      int
//      main()
// {
//     int n;
//     cin >> n;
    
//     for (int row = 0; row < n; row++)
//     {
//        for(int col=0;col<row+1;col++){
//         cout <<"*";
//        }
//        cout<<endl;
//     };
// }