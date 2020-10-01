#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define eb emplace_back
#define F first
#define S second
lli tree[1000001];
bool isPowerOfTwo (lli x)
{
    return x && (!(x&(x-1)));
}
void BuildTree(lli& n)
{
    lli i;
    if(isPowerOfTwo(n)==true)
    {
        //Size of Tree 2^n-1
        for(i=n;i<=(2*n-1);i++)
            cin>>tree[i];
    }
    else
    {
        lli m=n,j=0,k;
        k=ceil(log2(n));n=1<<k;//next Power of 2 hence new Size
        for(i=n ;i<=(2*n-1) && j<m ;i++,j++)
            cin>>tree[i];
        for(;i<=(2*n-1);i++)//appennd extra nodes to zero
            tree[i]=0;
    }
    for(i=n-1;i>=1;i--)
        tree[i]=tree[2*i]+tree[(2*i)+1];
    return;
}
lli query(lli a,lli b,lli n)
{
    a+=n-1;b+=n-1;
    lli s=0;
    while(a<=b)
    {
        if(a%2==1)s+=tree[a++];
        if(b%2==0)s+=tree[b--];
        a/=2;b/=2;
    }
    return s;
}
void update(lli k,lli x,lli n)
{
    k+=n-1;
    tree[k]+=x;
    for(k/=2;k>=1;k/=2)
        tree[k]=tree[2*k]+tree[2*k+1];
}
int main()
{
    freopen("input.txt","r",stdin);
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    lli n,k,i;
    /*5
    5 -8 0 3 -2
    */
    cin>>n;
    BuildTree(n);
    for(i=1;i<=2*n-1;i++)
        cout<<tree[i]<<" ";
    update(3,5,n);
    cout<<"\n";
    for(i=1;i<=2*n-1;i++)
        cout<<tree[i]<<" ";
    /*cout<<n<<" ";
    cout<<query(1,5,n)<<"\n";
    cout<<query(2,5,n)<<"\n";
    cout<<query(3,4,n)<<"\n";
    cout<<query(4,4,n)<<"\n";
    */
    return 0;
}
