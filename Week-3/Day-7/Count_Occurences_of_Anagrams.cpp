//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	int search(string pat, string s) {
	    map<char,int>mp,mp1;
	    int k=pat.size(),l=0,r=0,c=0;
	    for(auto x:pat) mp1[x]++;
	    while(r<s.size()){
	        mp[s[r]]++;
	        if(r-l+1==k){
	            bool f=true;
	            for(auto x:pat){
	                if(mp[x]==0 || mp[x]<mp1[x]){
	                    f=false;
	                    break;
	                }
	            }
	            if(f) c++;
	            mp[s[l]]--;
	            l++;
	        }
	        r++;
	    }
	    return c;
	}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends