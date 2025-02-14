class Solution {
    public:
        bool isPal(string s,int l,int r){
            while(l<r){
                if(s[l++]!=s[r--])
                    return false;
            }
            return true;
        }
        void rc(int ind,vector<vector<string>>&ans,vector<string> &a,string &s,int n){
            if(ind==n){
                ans.push_back(a);
                return;
            }
            for(int i=ind;i<n;i++){
                if(isPal(s,ind,i)){
                    a.push_back(s.substr(ind,i-ind+1));
                    rc(i+1,ans,a,s,n);
                    a.pop_back();
                }
            }
        }
        vector<vector<string>> partition(string s) {
            vector<vector<string>>ans;
            vector<string>a;
            rc(0,ans,a,s,s.size());
            return ans;
        }
    };