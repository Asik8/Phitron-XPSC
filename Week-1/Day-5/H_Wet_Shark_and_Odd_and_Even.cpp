#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define py cout<<"YES\n";
#define pn cout<<"NO\n";
#define forni for (int i = 0; i < n; i++)
#define fornj for (int j = 0; j < n; j++)

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin >> n;
    vector <ll> even,odd;
    for (int i=0;i<n;i++){
        ll x;
        cin >>x; 
        if(x%2) odd.pb(x);
        else even.pb(x);
    }      
    ll s=0;
    for(ll x:even){
        s+=x;
    }
    if(odd.size()>1){
        sort(odd.rbegin(),odd.rend());
        while(true){
            if(!(odd.size()%2)) break;
            else odd.pop_back();
        }
        for(int i=0;i<odd.size();i++) s+=odd[i];
    }
    cout<<s<<endl;
    return 0;
}