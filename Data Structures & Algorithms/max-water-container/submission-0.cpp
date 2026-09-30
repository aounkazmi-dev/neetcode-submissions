class Solution {
public:
    int maxArea(vector<int>& heights) {
        int width=0;
        int ht=0;
        int max=0;
        int i=0;
        int j=heights.size()-1;
        int mul=0;
        while(i<j){
            width= j -i;
            ht=min(heights[i],heights[j]);
            mul=width*ht;

            if(mul>max){
                max=mul;
            }

            if(heights[i]<heights[j]){
                i++;
            }
            else if(heights[i]>heights[j]){
                j--;
            }
            else{
                i++;
                j--;
            }


        }
         return max;
    }
};
