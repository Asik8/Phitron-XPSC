class Solution {
    public:
        void rc(vector<int>& v,vector<vector<int>> &ans, vector<int>&x,int freq[]){
            if(v.size()==x.size()){
                ans.push_back(x);
                return;
            }
            for(int i=0;i<v.size();i++){
                if(!freq[i]){
                    freq[i]=1;
                    x.push_back(v[i]);
                    rc(v,ans,x,freq);
                    freq[i]=0;
                    x.pop_back();
                }
            }
        }
        vector<vector<int>> permute(vector<int>& v) {
            vector<vector<int>>ans;
            vector<int>x;
            int freq[v.size()];
            for(int i=0;i<v.size();i++) freq[i]=0;
            rc(v,ans,x,freq);
            return ans;
        }
    };