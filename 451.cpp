/*I wanna be the very best, like no one ever was...*/

#include <algorithm>
#include <array>
#include <bitset>
#include <cassert>
#include <chrono>
#include <climits>
#include <cmath>
#include <complex>
#include <cstring>
#include <functional>
#include <iomanip>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <random>
#include <set>
#include <vector>
using namespace std;
/*******  All Required define Pre-Processors and Constants    *******/

#define int long long
#define ull unsigned long long 
#define ld long double
#define mem(a, b) memset(a, (b), sizeof(a))
#define rep(i, j, k) for (int i = j ; i < k ; ++i)
#define rrep(i, j, k) for (int i = j; i > k; --i)
#define all(cont) cont.begin(), cont.end()
#define rall(cont) cont.end(), cont.begin()
#define foreach(i, a) for(auto i: a)
#define forEach(it, l) for (auto it = l.begin(); it != l.end(); it++)
#define in(A, B, C) assert( B <= A && A <= C)
#define debug(a) cout << #a << ": " << a << endl
#define flag(n) cout << "here " << n << endl
#define w(x) int x;cin>>x;while(x--)
#define mp make_pair
#define pb push_back
 
#define endl '\n';
#define io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
 
 
 
#define TRACE
#ifdef TRACE
#define see(...) __f(#__VA_ARGS__,__VA_ARGS__);
template <typename Arg1>
void __f(const char* name, Arg1&& arg1){
    cerr<<name<<" : "<<arg1<<endl;
}
template <typename Arg1, typename... Args>
void __f(const char* names, Arg1&& arg1, Args&&... args){
    const char* comma=strchr(names+1,',');cerr.write(names,comma-names)<<" : "<<arg1<<" | ";__f(comma+1, args...);
}
#else
#endif
 
const int POSITIVE_INFINITY = 1<<30;
const int NEGATIVE_INFINITY = -9223372036854775807;
const ld PI = acos(-1.0);
const int MOD = 1000000007;
const int INF = 1e18;
const int N = 1e6+5;
int dp[N];

map<char, int> m1;



 string frequencySort(string s) {
        m1.clear();
        for(auto i :s)m1[i]++;
        priority_queue <pair<int,char>> pq;
        string res = "";
        for(auto k : m1)
        {
            pq.push({k.second, k.first}); 
        }
        while(!pq.empty())
        {
            auto i = pq.top();
            res.append(i.first,i.second);
            pq.pop();
        }
        return res;
    }



int32_t main() {
    io;
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    // cout<<frequencySort("tree")<<endl;
    cout<<frequencySort("loveleetcode")<<endl;
    // cout<<frequencySort("tree")<<endl;
    // cout<<frequencySort("tree")<<endl;


    return 0;
}
