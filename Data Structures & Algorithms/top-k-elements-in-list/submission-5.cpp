class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int>mp;
        
        for(int i=0; i<nums.size();i++){
            mp[nums[i]]++;
        }

        vector<pair<int,int>>freq;

        for(auto a : mp){
            freq.push_back({a.second , a.first});
        }

        sort(freq.rbegin(), freq.rend());

        vector<int>result;

        for(int i=0; i<k;i++){
            result.push_back(freq[i].second);
        }

        return result;
    }
};
