class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int,int>frequ;

        for(int i=0;i<numbers.size();i++){
            int comp=target-numbers[i];

            if(frequ.find(comp)!=frequ.end()){
                return {frequ[comp]+1, i+1};
            }

            frequ[numbers[i]]=i;
        }

         return {};
    }
};
