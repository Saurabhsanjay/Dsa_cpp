#include<iostream>
using namespace std;

// gltich 
int main()
{
    int n;
    cin>>n;
    for (int row = 0; row < n; row++)
    {
        for(int col=0;col<n-row-1;col++){
            cout<<" ";
        }
        for (int col = 0; col < row+1; col++)
        {
          cout<<row+col+1;
            /* code */
        }
        int start=2*row;
        for (int col = 0; col < row; col++)
        {
            cout<<start-1;
            start=start-1;
            /* code */
        }
        
     
     cout<<endl;   /* code */
    }
    
    return 0;
}