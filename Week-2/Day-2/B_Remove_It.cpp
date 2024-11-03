#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define py cout << "YES\n";
#define pn cout << "NO\n";
#define forni for (int i = 0; i < n; i++)
#define fornj for (int j = 0; j < n; j++)

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,k;
    cin>>n>>k;
    vector<ll> v(n),ans;
    for (auto &x : v) cin >> x;
    forni{
        if(v[i]!=k) ans.pb(v[i]);
    }
    for(auto c:ans) cout<<c<<" ";
    cout<<endl;
    return 0;
}