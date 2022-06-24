class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
         map<int,int> mp;
        
        for(int i=0;i<nums.size();i++)
        {
            if(!mp.count(nums[i])) // if element is not present in mp
            {
                mp[nums[i]]=i;
            }
            else
            {
                if(abs(mp[nums[i]] - i) <= k) // if the diff is at most k
                    return true;
                else
                    mp[nums[i]]=i;
            }
        }
        return false;
    }
};