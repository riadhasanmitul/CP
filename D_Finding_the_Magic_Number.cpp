#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template<class T> using iset=tree<T,null_type,less<T>,
rb_tree_tag,tree_order_statistics_node_update> ;//find_by_order/find_by_key
#define ll long long
#define YY cout<<"Yes"<<endl;
#define NN cout<<"No"<<endl;
#define sz s.size()
#define pb push_back
#define ss " " 
#define all v.begin(),v.end()
#define endl "\n"
const int N=1e5+10;
const int mod=1000000007;
const long double pi=3.141592653589793238;

void solve(){
    string s;cin>>s;
    int res=1;
    for(int i=0;i<sz;i++){
        if(s[i]=='3'||s[i]=='9')continue;
        else{
            res=0;
            break;
        }
    }
    if(res)YY
    else NN
}

signed main()
{
    fastio
    int test=1;
    //cin>>test;
    while (test--)
    {
        solve();
    }
    return 0;
}
//Iterate from n-1 index,Use Map,is testcase input needed?