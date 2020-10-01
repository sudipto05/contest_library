#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cmath>
#include <vector>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <queue>
#include <ctime>
#include <cassert>
#include <complex>
#include <string>
#include <cstring>
#include <chrono>
#include <random>
#include <bitset>
using namespace std;
#define int     long long
#define F       first
#define S       second
#define _READ   freopen("input.txt","r", stdin);
#define _FAST   ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
void solve()
{
}
int32_t main()
{
    clock_t tStart = clock();
    #ifndef ONLINE_JUDGE
    _READ
    #endif
    
    int t;
    t=1;
    while(t--)
        solve();
    
    #ifndef ONLINE_JUDGE
    cout<<fixed<<setprecision(5)<<"\nTime taken: "<<(double)(clock() - tStart)/CLOCKS_PER_SEC;
    #endif
    
    return 0;
}
/*
===FOR N-Dimensional Vector===
https://codeforces.com/blog/entry/76149
g++ -std=c++17 -Wshadow -Wall -g -fsanitize=address -fsanitize=undefined a.cpp -o a -D_GLIBCXX_DEBUG
*/
