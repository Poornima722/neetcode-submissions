class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        //this is not an optimal soln. the optimal soln is heap and 
        //bucket sort. for now i am doing using unordered_map


        unordered_map<int, int> mp;

        for (int x:nums){
            mp[x]++;
        }

        vector<pair<int, int>>v(mp.begin(), mp.end());

        sort(v.begin(), v.end(),
            [](pair<int,int> a, pair<int,int> b){
            return a.second > b.second;
        });

        vector<int> ans;
        for(int i=0; i<k; i++){
            ans.push_back(v[i].first);
        }

        return ans;
    }
};
