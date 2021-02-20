#include<bits/stdc++.h>
using namespace std;
#define all(v)                  v.begin(), v.end()
#define rall(v)                 v.rbegin(), v.rend()
#define des()                   greater<int>()
#define rep(i, a, n)            for(int i = a; i < n; i++)  
#define rrep(i, n, a)           for(int i = n; i >= a; i--)
#define pqueue                  priority_queue
#define umap                    unordered_map
#define uset                    unordered_set
#define pub                     push_back
#define pob                     pop_back  
#define nl                      '\n' //in interactive problem should not use this
#define println                 cout << endl
#define scan_array(arr, n)      for(int i = 0; i < n; i++) { cin >> arr[i]; }
#define print_array(arr, n)     for(int i = 0; i < n; i++) { cout << arr[i] << " "; } println;
#define print(var)              cout << var << nl;
typedef long long int ll;
typedef unsigned long long int ull;
typedef long double ld;
typedef pair<int, int> pii;
const int p = 1e9+7;
const int eps = 1e-9;
const int inf = INT_MAX;
const int N = 1e5+5;

/*************User defined function*************/
void solve() {
    int n, c;
    cin >> n >> c;

    vector<int> v(n);
    scan_array(v, n);
    sort(all(v));

    int ans = 0;
    int low = v[0], high = v[n-1];
    while(low <= high) {
        int mid = low+(high-low)/2;
        int cnt = 1, l = 0;
        for(int i = 1; i < n && cnt < c; i++) {
            if(v[i]-v[l] >= mid) {
                l = i;
                cnt++;
            }
        }

        if(cnt >= c) {
            ans = mid;
            low = mid+1;
        } else {
            high = mid-1;
        }
    }

    print(ans);
}


/*************main function*************/
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 

    int test;
    cin >> test;
    while(test-- > 0) {
        solve();
    }

    //solve();

    return 0;
}    
