//author : Deshik (^o^)
#include <bits/stdc++.h>

using namespace std;

// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds; 
// #define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>

#define fr(a,b,c)        for(int a=b;a<c;a++)
#define rfr(a,b,c)       for(int a=b;a>c;a--)
#define int              long long int
#define double           long double
#define vi               vector<int>
#define pi               pair<int, int>
#define si               set<int>
#define mii              map<int, int>
#define vpi              vector<pair<int, int>>
#define pbp(a,b)         push_back({a,b})
#define pb(n)            push_back(n)
#define mp(a,b)          make_pair(a,b)
#define bitcntll(n)      __builtin_popcountll(n)
#define ff               first
#define ss               second             
#define sz(s)            (long long)(s.size())
#define all(v)           (v).begin(),(v).end()
#define sp(n)            cout<<setprecision(n)<<fixed;
#define in(v)            for(auto &item : v) cin>>item;
#define inp(v)           for(auto &item : v) cin>>item.ff>>item.ss;
#define outs(y)          cout << y << endl;return;

const double PI = 3.1415926535;
const int inf = 1e18;
const int mod = 1000000007;


/*
1. Think Greedy
2. Think Brute Force
3. Think solution in reverse order
4. Think DP [ check constraints carefuinty ]
5. Check base cases for DP and prove solution for Greedy
6. Think Graph 
7. Sort is better in somecases than 0(n^2) comparision
*/

int MaxFrequency(int N, vector<int> &arr, int K, int X) {
        map<int, int> mp,mp2;
        vector<int> sorted;
        for (int i = 0; i < N; i++) {
            mp[arr[i]]++;
            mp2[arr[i]]++;
            sorted.push_back(arr[i]);
        }
        sort(sorted.begin(), sorted.end());
        int mx = 1;
        for (auto i : mp) {
            int j = upper_bound(sorted.begin(), sorted.end(), i.first + X) - lower_bound(sorted.begin(), sorted.end(), i.first - X);
            int j1 = upper_bound(sorted.begin(), sorted.end(), i.first + 2 * X) - lower_bound(sorted.begin(), sorted.end(), i.first);
            int j2 = upper_bound(sorted.begin(), sorted.end(), i.first) - lower_bound(sorted.begin(), sorted.end(), i.first - 2 * X);
            mx = max(mx, i.second + min(K, j - i.second));
            mx = max(mx, mp2[i.first + X] + min(K, j1 - mp2[i.first + X]));
            mx = max(mx, mp2[i.first - X] + min(K, j2 - mp2[i.first - X]));
        }
        return mx;
    }

void solve() {
    int n,k,x;
    cin >> n >> k >> x;
    vi v(n);in(v);
    sort(all(v));
    int result = MaxFrequency(n,v,k,x);

    cout << "Maximum Frequency: " << result << endl;
}


signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    //compute();
    int T=1;

    // cin >> T;

    for(int i = 1; i <= T; i++){
        solve();
    }
    return 0;
}
