class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>st1;
        unordered_map<char,int>st2;
        for (char x :s){
            st1[x]++;
        }
        for(char x:t){
            st2[x]++;
        }
        for (auto x : st1){
            if (st2.count(x.first)){
                if(st2[x.first]==st1[x.first]){
                    continue;

                }
                return false;
            }
            else{
                return false;
            }
        }
        for (auto x : st2){
            if (st1.count(x.first)){
                if(st2[x.first]==st1[x.first]){
                    continue;

                }
                return false;
            }
            else{
                return false;
            }
        }
        return true;

    }
};
