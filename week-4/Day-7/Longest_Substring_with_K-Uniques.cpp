//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    int longestKSubstr(string s, int k) {
        int l=0,r=0,c=-1;
        int n=s.size();
        unordered_map<char,int>mp;
        while(r<n){
            mp[s[r]]++;
            if(mp.size()==k) c=max(c,r-l+1);
            while(mp.size()>k){
                mp[s[l]]--;
                if(mp[s[l]]==0) mp.erase(s[l]);
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
        string s;
        cin >> s;
        int k;
        cin >> k;
        Solution ob;
        cout << ob.longestKSubstr(s, k) << endl;
    
cout << "~" << "\n";
}
}

// } Driver Code Ends