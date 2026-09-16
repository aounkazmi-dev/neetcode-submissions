class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>dat;
        for(int x:nums){
            dat[x]++;
        }
        map<int,vector<int>>mp;
        for(auto x : dat){
            mp[x.second].push_back(x.first);
        }
        vector<int>res;
        int i=0;
        for (auto it = mp.rbegin(); it != mp.rend(); it++){
            if(i==k){
                break;
            }
            for(auto x: it->second){
                res.push_back(x);
                i++;
            }
            

        }
        return res;
    }
};
