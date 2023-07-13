#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void prime_factor(ll n)
{
    if(n==1)
    {
        cout<<1<<endl;
        return;
    }
    ll count=0;
    while(n%2==0)
    {
        n/=2;
        count++;
    }
    if(count)cout<<2<<'^'<<count<<endl;
    for(ll i=3;i*i<n;i+=3)
    {
        if(n%i==0)
        {
            count=0;
            while(n%i==0)
            {
                n/=i;
                count++;
            }
            cout<<i<<'^'<<count<<endl;
        }
    }
    if(n!=1)cout<<n<<'^'<<1<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n;
    cin>>n;
    prime_factor(n);
}