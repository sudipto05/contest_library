#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define mod 1000000007
#define F first
#define S second
#define eb emplace_back
/*unordered_map<int,int>mp;
mp.reserve(1024);
mp.max_load_factor(0.25);
*/
int main()
{
    freopen("input.txt","r",stdin);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    lli a,b,m,i,j,k,c,n,t,maxi,s;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        map<pair<lli,lli>,lli> maps;
        lli visited[n+1]={},power[n+1];
        for(i=1;i<=n;i++)
            power[i]=INT_MAX;
        for(i=1;i<=m;i++)
        {
            cin>>a>>b>>c;
            pair<lli,lli> f1={a,b},f2={b,a};
            if(maps.find(f1)==maps.end())
            {
                maps[f1]=c;
                maps[f2]=c;
            }
            else if(c<maps[f1])
                maps[f1]=c,maps[f2]=c;
        }
        //for(auto k:maps)
        //{
       //     cout<<k.F.F<<" "<<k.F.S<<" "<<k.S<<"\n";
        //}
        cin>>s;
        a=s;
        power[s]=0;
        for(c=1;c<=n;c++)
        {
            visited[s]=1;
            maxi=INT_MAX;
            for(j=1;j<=n;j++)
            {
                pair<lli,lli> f={s,j};
                if(maps.find(f)!=maps.end())
                {
                    if(power[j]>maps[f]+power[s])
                        power[j]=maps[f]+power[s];
                    //cout<<power[j]<<" ";
                }
                if(visited[j]==0 && maxi>power[j] )
                {
                    maxi=power[j];
                    i=j;
                }
            }
            s=i;
        }
        for(i=1;i<=n;i++)
            if(a!=i && i!=INT_MAX)
                cout<<power[i]<<" ";
            else if(a!=i && i==INT_MAX)
                cout<<"-1 ";
            cout<<"\n";
    }
    return 0;
}
