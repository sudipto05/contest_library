#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define mod 1000000007
#define F first
#define S second
#define pb push_back
#define eb emplace_back
/*unordered_map<int,int>mp;
mp.reserve(1024);
mp.max_load_factor(0.25);
*/
int main()
{
    vector<int> v={1,2,3,2,1,2,3,1,2,2,1,1,2,1,4,1,1};
    auto it =remove(v.begin(),v.end(),1);
    v.erase(it,v.end());
    v.shrink_to_fit();
    for(auto x:v)
        cout<<x<<" ";
}
