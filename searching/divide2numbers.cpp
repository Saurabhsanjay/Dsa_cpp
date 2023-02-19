#include <iostream>
#include<vector>
using namespace std;

int Divide2(int dividend,int divisor){
    int s = 0;
    int e = abs(dividend);
    int mid = (s + e) / 2;
    int ans=1;

    while(s<=e){
        if(abs(mid*divisor)==abs(dividend)){
            ans= mid;
            break;
        }
        if(abs(mid*divisor)>abs(dividend)){
            e=mid-1;
        }
        else{
            // store ans
            ans=mid;
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }

    if((divisor<0 &&dividend<0)||(divisor>0 &&dividend>0)){

    return ans;
    }else{
        return -ans;
    }
}

int main()
{
    
    int dividend = 36;
    int divisor = -6;
    int ans = Divide2(dividend,divisor);
    cout << "Ans is " << ans << endl;
    return 0;
}