#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll binary_exponetiation(ll a,ll b)
{
    ll ans1=1;
    while(b)
    {
        if(b%2)
        {
            ans*=a;
            b--;
        }
        else
        {
            a*=a;
            b/=2;
        }
    }
    return ans1;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cout<<binary_exponetiation(2,3)<<endl;
}