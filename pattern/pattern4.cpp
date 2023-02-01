#include <iostream>
using namespace std;

// ******
// *****
// ****
// ***
// **
// *


int main(){
    int n;
    cin>>n;
    for(int row=n;row>=0;row--){
        for(int col=row-1;col>=0;col--){
            cout<<"*";
        }
        cout<<endl;
    }
}










// int main()
// {
//     int n;
//     cin >> n;

//     for (int row = 0; row < n; row++)
//     {
//         for (int col = 0; col < n - row; col++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     };
// }