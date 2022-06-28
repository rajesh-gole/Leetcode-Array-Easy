class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;
        
        for(int i=0;i<nums.size();i++)
        {
            if(mp.count(target-nums[i]))
                return {i,mp[target-nums[i]]};
            mp[nums[i]]=i;
        }
        return {};
    }
};

//Time Complexity: O (N)
//Space Complexity: O (N)

/*
for (int i=0; i<nums.size(); i++) {
            for (int j=i+1; j<nums.size(); j++) {
                if (nums[j]==target-nums[i]) return {i, j};
            }
        }
        return {};
        
//Time Complexity: O (N^2)
//Space Complexity: O (1)      
*/