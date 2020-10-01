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
void foo(char* i)
{
    cout<<"foo_char"<<endl;
}
void foo(int i)
{
    cout<<"foo_int"<<endl;
}
int main()
{
    foo(NULL);// calls int
    foo(nullptr);// calls charS
    return 0;
}
