class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> idx;
        unordered_map<int, int> mp;
        
        for(int i=0; i<nums.size(); i++){
            int req= target-nums[i];
        

            if(mp.find(req)!= mp.end()){
                idx.push_back(mp[req]);
                idx.push_back(i);
                break;
            }

            mp[nums[i]]=i;
        }

        

        return idx;
    }
};
