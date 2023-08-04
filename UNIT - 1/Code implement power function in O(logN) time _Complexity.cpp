/* Code implement power function in O(logN) time _Complexity */
#include <iostream>
using namespace std;
#define ll long long

ll power(ll base,ll n)
{
    ll ans=1;
    while(n)
    {
        if(n&1)
        {
            n=n-1;
            ans=(ans*base);
        }else
        {
            n/=2;
            base=(base*base);
        }
    }
    return ans;
}


int main()
{
    ll base,n;
    cout<<"Enter 1st number - ";
    cin>>base;
    
    cout<<"Enter 2nd number - ";
    cin>>n;
    
    int p=power(base,n);
    cout<<base<<"^"<<n<<" = "<<p<<endl;

    return 0;
}
