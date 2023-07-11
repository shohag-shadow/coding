#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n;
    cin>>n;
    while(n%2==0)
    {
        cout<<2<<' ';
        n/=2;
    }
    for(ll i=3;i*i<=n;i+=2)
    {
        while(n%i==0)
        {
            cout<<i<<' ';
            n/=i;
        }
    }
    if(n!=1)cout<<n<<endl;
    else cout<<endl;
}