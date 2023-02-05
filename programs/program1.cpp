// write a function to add 2 numbers 

#include<iostream>
using namespace std;


int getSum(int a, int b){
    int res=a+b;
    return res;
}
int main()
{
    int a;
    cin>>a;
    int b;
    cin>>b;
    int sum=getSum(a,b);
    cout<<sum<<endl;

    return 0;
}