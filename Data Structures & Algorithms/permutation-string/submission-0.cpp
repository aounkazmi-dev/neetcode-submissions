class Solution {
public:
    bool checkInclusion(string s1, string s2) {
       int ws=s1.length();
       int st2Size=s2.length();

       if(st2Size<ws){
        return false;
       }

       unordered_map<char,int>freq1;
       unordered_map<char,int>freq2;

       for (int i=0;i<s1.length();i++){
        freq1[s1[i]]++;
       }

       int left=0;
       for(int right=0;right<st2Size;right++){
        freq2[s2[right]]++;
        if(right-left+1>ws){
            freq2[s2[left]]--;
            if(freq2[s2[left]]==0){
                freq2.erase(s2[left]);

            }
            left++;
        }
        if(freq1==freq2){
            return true;
        }
       }
return false;

    
    }
};
