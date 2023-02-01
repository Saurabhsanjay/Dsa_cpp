#include <iostream>
using namespace std;

// * * * * * 1
// *       * 2
// * * * * * 3

// row==1 || row==rowcount || col==1 ||col==colcount
// row=2 rowcount=5 xx false
//  xx row==1 || xx row==rowcount || xx col==1 ||col==colcount
//
//
//
//
//
//
//
//

// int main(){
// int rowcount,colcount;
// cin>>rowcount;cin>>colcount;

// for(int row=1;row<=rowcount;row++){
//     for(int col=1;col<=colcount;col++){
//         if(row==1 || row==rowcount || col==1 ||col==colcount){
//             cout<<"*";
//         }
//         else{
//             cout<<" ";
//         }
//     }
//     cout<<endl;
// }
// }
int main()
{
int rowcount, colcount;
cin >> rowcount;
cin >> colcount;

for (int row = 0; row < rowcount; row++)
{
   if(row==0 || row==rowcount-1){
    for(int col=0;col<colcount;col++){
        cout<<"*";
    }
   }
   else{
    cout <<"*";
    for(int col=0;col<colcount-2;col++){
      cout<<" ";
    }
    cout<<"*";
   }
cout<<endl;
}
}

//  int main()
// {
// int rowCount,colCount;
// cin>>rowCount;
// cin>>colCount;
//     for (int row = 0; row < rowCount; row++)
//     {
//         if (row == 0 || row == rowCount-1)
//         {
//             for (int col = 0; col < colCount; col++)
//             {
//                 cout << "*";
//             }
//         }
//         else
//         {
//             cout << "*";
//             for (int col = 0; col < colCount-2; col++)
//             {
//                 cout << " ";
//             }
//             cout << "*";
//         }
//         cout << endl;
//     };
// }