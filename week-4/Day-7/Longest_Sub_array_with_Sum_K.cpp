//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int lenOfLongestSubarr(vector<int>& a, int k) {
        // code here
        map<int,int>m;
        int c=0,n=a.size(),r=0,s=0;
        m[0]=-1;
        while(r<n){
            s+=a[r];
            if(m.find(s-k)!=m.end()){
                c=max(c,r-m[s-k]);
            }
            if(m.find(s)==m.end()) m[s]=r;
            r++;
        }
        return c;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore newline character after t

    while (t--) {
        vector<int> arr;
        int k;
        string inputLine;

        getline(cin, inputLine); // Read the array input as a line
        stringstream ss(inputLine);
        int value;
        while (ss >> value) {
            arr.push_back(value);
        }

        cin >> k;
        cin.ignore(); // Ignore newline character after k input

        Solution solution;
        cout << solution.lenOfLongestSubarr(arr, k) << "\n";
        cout << "~\n";
    }

    return 0;
}

// } Driver Code Ends