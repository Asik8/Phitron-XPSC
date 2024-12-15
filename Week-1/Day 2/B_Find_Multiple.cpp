#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define py cout<<"YES\n";
#define pn cout<<"NO\n";
#define forni for (int i = 0; i < n; i++)
#define fornj for (int j = 0; j < n; j++)

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll a,b,c;
    cin>>a>>b>>c;
    if(c>=a && c<=b) cout<<c<<endl;
    else{
        bool f= false;
        ll i=2,d=c;
        while(d<=b){
            d=c*i;
            if(d>=a && d<=b){
                f = true;
                break;
            }
            i++;
        }
        if(f) cout<<d<<endl;
        else cout<<"-1\n";
    }
    return 0;
}