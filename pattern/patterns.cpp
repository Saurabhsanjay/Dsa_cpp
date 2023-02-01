#include <iostream>
using namespace std;

// *****
// *****
// *****




int main(){
    int rowcount, colcount;
    cin>>rowcount;
    cin>>colcount;

    for(int row=0;row<rowcount;row++){
        for(int col=0;col<colcount;col++){
            cout<< "* ";
        }
        cout<<endl;
    }
}
















// int main()
// {

//     for (int row = 0; row < 3; row++)
//     {
//         for (int col = 0; col < 5; col++)
//         {
//             cout << "*"  " " ;
//         }
//         cout << endl;
//     };
// }