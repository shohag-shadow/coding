#include<bits/stdc++.h>
using namespace std;
#define ll long long int
const ll N=1e6+10;
ll smallest_prime_divisor[N];
void sieve()
{
    smallest_prime_divisor[0]=smallest_prime_divisor[1]=1;
    for(ll j=4;j<N;j+=2)smallest_prime_divisor[j]=2;
    for(ll i=3;i*i<N;i+=2)
    {
        if(smallest_prime_divisor[i]==0)
        {
            for(ll j=i*i;j<N;j+=i)smallest_prime_divisor[j]=i;
        }
    }
}
void prime_factors_using_sieve(ll n)
{
    while(smallest_prime_divisor[n]!=0)
    {
        cout<<smallest_prime_divisor[n]<<' ';
        n/=smallest_prime_divisor[n];
    }
    cout<<n<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    sieve();
    ll n;
    cin>>n;
    prime_factors_using_sieve(n);
}