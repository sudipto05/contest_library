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
    //https://www.geeksforgeeks.org/difference-between-p-p-and-p/
    //const keyword
    //function pointers
    //freopen("input.txt","r",stdin);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    /*lli x=10;
    lli *ptr=x;//wrong
    lli *ptr=&x;
    cout<<x<<" "<<" "<<&x<<"\n";
    cout<<ptr<<" "<<&ptr<<" "<<*ptr;*/
    //CASE 2:
    /*lli x[]={10,20};
    lli *ptr=x;
    cout<<x<<" "<<" "<<*x<<"\n";
    //++x;//error
    ++*x;//value change
    cout<<x<<" "<<" "<<*x<<"\n";
    cout<<ptr<<" "<<&ptr<<" "<<*ptr<<"\n";
    ++ptr;//go to next pointer
    cout<<ptr<<" "<<&ptr<<" "<<*ptr<<"\n";
    ++*ptr;//increment value
    cout<<ptr<<" "<<&ptr<<" "<<*ptr<<"\n";*/
    //CASE 3: MultiPointer
    /*
    lli x=10;
    lli *z=&x;
    lli **y=&z;
    cout<<x<<" "<<&x<<"\n";
    cout<<z<<" "<<&z<<" "<<*z<<" "<<"\n";
    cout<<y<<" "<<&y<<" "<<*y<<" "<<**y<<"\n";
    */
    //CASE 4: STRINGS
    /*char *ptr="SUMANTO";
    cout<<ptr<<"\n";//SUMANTO
    cout<<*ptr<<"\n";//S
    cout<<&ptr<<"\n";//base address
    ++ptr;
    cout<<*ptr<<"\n";//U
    cout<<ptr<<"\n";//UMANTO
    cout<<&ptr<<"\n";//same base address
    //++*ptr;//invalid*/
    return 0;
}
