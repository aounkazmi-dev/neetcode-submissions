class Solution {
public:
    string minWindow(string s, string t) {
        
        if(s.length()<t.length()){
            return "";
        }

        unordered_map<char,int>freq1;
        for (char x : t){
            freq1[x]++;
        }

        int required=freq1.size();

        int min=INT_MAX;
        int left=0;
        int got=0;
        int minIndex=-1;
        int ws=0;

        unordered_map<char,int>freq2;

        for(int right =0;right<s.length();right++){

            char a=s[right];
            freq2[a]++;

            if(freq1.contains(a) && (freq1[a]==freq2[a])){
                got++;

            }
            while(got==required){
                 ws=right-left+1;
                if(ws<min){
                    minIndex=left;
                    min=ws;

                }

                char l =s[left];
                freq2[l]--;
                if(freq1.contains(l)&&(freq1[l]>freq2[l])){
                    got--;

                }
                left++;
            }
        }
        if(minIndex==-1){
            return "";
        }
        else{
            return s.substr(minIndex, min);
        }
        
    }
};
