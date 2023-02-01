#include <iostream>
using namespace std;

// 5
// 12345
// 1234
// 123
// 12
// 1



// int main(){
//     int n;
//     cin>>n;
//     for(int row=n;row>=1;row--){
//         for(int col=1;col<=row;col++){
//             cout<<col;

//         }
//         cout<<endl;
//     }
// }



int main()
{
    int n;

    cin >> n;

    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n-row; col++)
        {
            cout << col + 1;
        }
        cout << endl;
    };
}
// int main()
// {
//     int n;

//     cin >> n;

//     for (int row = 0; row < n; row++)
//     {
//         for (int col = 0; col < n - row; col++)
//         {
//             cout << col + 1;
//         }
//         cout << endl;
//     };
// }