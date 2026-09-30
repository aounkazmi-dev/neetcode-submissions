class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i=0;
        int j=numbers.size()-1;
        vector<int>twosum;

        while(i<j){

            if((numbers[i]+numbers[j])==target){
                twosum.push_back(i+1);
                twosum.push_back(j+1);
                return twosum;
            }

            else if((numbers[i]+numbers[j])<target){
                i++;
            }
            else if((numbers[i]+numbers[j])>target){
                j--;
            }
        }

        
    }
};
