#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define py cout<<"YES\n";
#define pn cout<<"NO\n";
#define forni for (int i = 0; i < n; i++)

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string a,b;
    cin>>a>>b;
    ll n = a.size(),c=0;
    forni{
        if(a[i] !=b[i]) c++;
    }
    cout<<c<<endl;
    return 0;
}