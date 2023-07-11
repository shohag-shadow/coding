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
    if(n%2==0&&n!=2)cout<<"Not Prime"<<endl;
    else
    {
        ll flag=1;
        for(ll i=3;i*i<=n;i+=2)
        {
            if(n%i==0&&n!=i)
            {
                flag=0;
                break;
            }
        }
        flag?cout<<"Prime"<<endl:cout<<"Nnt Prime"<<endl;
    }
}