class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int left=0;
        int right =left+1;
        int maxp=0;
        for(right=1;right<prices.size();right++){
            if(prices[right]<prices[left]){
                left=right;
            }
            else{
                maxp=max(maxp,prices[right]-prices[left]);
            }
        }
        return maxp;
    }
};
