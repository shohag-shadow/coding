#include<bits/stdc++.h>
using namespace std;
#define ll long long int
const ll N=1e6+10;
bool prime[N];
void sieve()
{
    prime[1]=1;
    prime[0]=1;
    for(ll i=2;i*i<N;i++)
    {
        if(prime[i]==0)
        {
            for(ll j=i*i;j<N;j+=i)prime[j]=1;   //1 means not a prime and 0 means prime
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    sieve();
    ll n;
    cin>>n;
    !prime[n]?cout<<"YES"<<endl:cout<<"NO"<<endl;
}