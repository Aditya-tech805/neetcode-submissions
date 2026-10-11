class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>numset(nums.begin(), nums.end());
        int streak =0;

        for(int num : numset){
            if(numset.find(num-1)==numset.end()){
                int currentnum=num;
                int currstreak =1;

                while(numset.find(currentnum+1)!=numset.end()){
                     currentnum+=1;
                     currstreak+=1;
                }
              streak = max(streak, currstreak);
            }
        }
        return streak;
    }
};
