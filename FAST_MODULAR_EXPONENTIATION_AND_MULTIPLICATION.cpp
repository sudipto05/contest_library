#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define mod 10000000000
#define F first
#define S second
#define pb push_back
#define eb emplace_back
#define MP make_pair
/*unordered_map<int,int>mp;
mp.reserve(1024);
mp.max_load_factor(0.25);
*/
lli mul(lli a,lli b)
{
    if(b==0)
        return 0;
    if(b==1)
        return a;
    lli o=mul(a,b/2)%mod;
    if(b%2==0)
        return (o+o)%mod;
    return (o+o+a)%mod;
}
lli power(lli n,lli k)
{
    if(n==1 || k==0)
        return 1;
    if(k==1)
        return n;
    lli o=power(n,k/2);
    lli i=mul(o,o);
    if(k%2==0)
        return i;
    return mul(i,n);
}
int main()
{
   // #ifndef ONLINE_JUDGE
    //freopen("input.txt","r", stdin);
    //#endif // ONLINE_JUDGE
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    lli n,t,i,j,k,ans=0;//doub,ans=0;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        ans+=power(i,i);
        ans%=mod;
    }
    cout<<ans;
    return 0;
}
