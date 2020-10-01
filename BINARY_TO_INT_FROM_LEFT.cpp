#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define mod 1000000007
#define F first
#define S second
#define pb push_back
#define eb emplace_back
#define MP make_pair
/*unordered_map<int,int>mp;
mp.reserve(1024);
mp.max_load_factor(0.25);
*/
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r", stdin);
    #endif // ONLINE_JUDGE
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    lli t,n,i,j,k,temp,c,cur;
    cin>>t;
    string str;
    while(t--)
    {
        cin>>str;
        n=str.length();
        cur=-1;c=0;
        lli pre[n]={};
        for(i=n-1;i>=0;i--)
        {
            if(str[i]=='1')
                cur=i;
            pre[i]=cur;
        }
        for(j=0;j<n;j++)
        {
            temp=0;
            if(pre[j]==-1)
                continue;
            for(k=pre[j];k<min(pre[j]+20,n);k++)
            {
                temp=2*temp+(lli)(str[k]-'0');
                if(k-j+1==temp)
                    c++;
            }
        }
        cout<<c<<"\n";
    }
    return 0;
}
