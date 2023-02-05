#include<iostream>
using namespace std;



int getSum(int n){
int sum=0;
for (int i = 0; i <= n; i++)
{
    if (i%2==0)
    {
        /* code */
    sum+=i;
    }
    

    /* code */
}
return sum;

}
int main()
{
    int n;
    cin>>n;
  
int sum=getSum(n);
    
    cout<<sum<<endl;
    return 0;
}