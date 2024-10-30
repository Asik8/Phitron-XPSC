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
    string s;
    cin>>s;
    int a[26] = {0};
    for(char c:s) a[c-'a']++;
    bool f = false;
    for(int i=0;i<26;i++){
        if(a[i] == 0){
            f = true;
            cout<<char('a'+i)<<endl;
            break;
        }
    }
    if(!f) cout<<"None\n";
    return 0;
}