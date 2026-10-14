class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int, int> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }

        for (int x:nums){
            if(mp[x] >1){
                return true;
                break;
            }
        }
        return false;

    }
};