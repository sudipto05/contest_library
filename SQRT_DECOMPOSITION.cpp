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
lli ar[9000000];
lli block[3000],blockSize;
void update(lli index, lli value)
{
    lli blockNumber=index/blockSize;
    block[blockNumber]+=value-ar[index];
    ar[index]=value;
}
lli query(lli l,lli r)
{
    lli sum=0;
    while(l<r && l%blockSize!=0 && l!=0)
        sum+=ar[l++];
    while(l+blockSize<=r)
    {
        sum+=block[l/blockSize];
        l+=blockSize;
    }
    while(l<=r)
        sum+=ar[l++];
    return sum;
}
void preProcess(lli input[],lli n)
{
    lli blockIndex =-1;
    blockSize=sqrt(n);
    for(lli i=0;i<n;i++)
    {
        ar[i]=input[i];
        if(i%blockSize==0)
            blockIndex++;
        block[blockIndex]+=ar[i];
    }
}
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r", stdin);
    #endif // ONLINE_JUDGE
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    lli n;
    cin>>n;
    lli input[n];
    for(lli i=0;i<n;i++)
        cin>>input[i];
    preProcess(input,n);
    cout<<query(1,7)<<"\n";
    update(3,8);
    cout<<query(1,7)<<"\n";
    update(6,0);
    cout<<query(1,7)<<"\n";
    update(1,99);
    cout<<query(5,6)<<"\n";
    cout<<query(1,3)<<"\n";
    update(9,-12);
    cout<<query(7,11)<<"\n";
    return 0;
}
