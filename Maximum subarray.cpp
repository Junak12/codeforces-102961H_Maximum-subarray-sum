#include<bits/stdc++.h>
#define opt()ios_base::sync_with_stdio;cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long
using namespace std;
int main()
{
    opt();
    ll n;
    cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }
    ll sum=0;
    ll mx=INT_MIN;
    for(ll i=0;i<n;i++)
    {
        sum=sum+a[i];
        if(sum>mx)
        {
            mx=sum;
        }
        if(sum<0)
        {
            sum=0;
        }
    }
    cout<<mx<<endl;
    return 0;
}
