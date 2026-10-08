class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>result ;
        vector<pair<int,int>>arr;
        int j=nums.size()-1;
        int i=0;
        for(int i=0;i<nums.size();i++){
            arr.push_back({nums[i],i});
        }
        sort(arr.begin(), arr.end());
        while(i<j){
            int sum =arr[i].first+arr[j].first;
            if(sum==target){
               return{ min(arr[i].second, arr[j].second),
                    max(arr[i].second, arr[j].second)
               };
            }

            else if(sum < target){
                i++;
            }
            else if(sum>target){
             j--;
            }
            
        }
        return {-1,-1};
    }
};
