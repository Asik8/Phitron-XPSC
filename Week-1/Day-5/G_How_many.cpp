#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll s,t,co=0;
    cin>>s>>t;
    for(int a=0;a<=s;a++){
        for(int b=0;a+b<=s;b++){
            for(int c=0;a+b+c<=s;c++){
                if(a*b*c <=t) co++;
            }
        }
    }
    cout<<co<<endl;
    return 0;
}