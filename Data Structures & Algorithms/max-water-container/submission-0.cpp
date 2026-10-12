class Solution {
public:
    int maxArea(vector<int>& heights) {
         int start=0;
         int end=heights.size()-1;
         int max_water =0;
         while(start < end){
            int width=end -start;
            int h=min(heights[start], heights[end]);
            int current_area = width*h;

            max_water = max(max_water,current_area);

             if (heights[start] < heights[end]) {
                start++;
            } else {
                end--;
            }
         }
         return max_water;
    }
};
