#include<iostream>
using namespace std;



    int main()
{
    
    int n;
    cin>>n;
    int count=0;
   for (int i = 1; i <= n; i++)
   {
    if (n%i==0)
    {
        count++;
        /* code */
    }
   
    /* code */
   }
   if (count==2)
   {
    cout<<"PRime";
    /* code */
   }
   else
   {
    cout<<"Not_PRime";
    /* code */
   }
   
   
    cout<<endl;
    return 0;
}