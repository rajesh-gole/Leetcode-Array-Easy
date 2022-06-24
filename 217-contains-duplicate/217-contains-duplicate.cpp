class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        //Method-1
        /*
        sort(nums.begin(),nums.end());
        for(int i=1;i<nums.size();i++)
        {
            if(nums(i)==nums(i-1))
                return true;
        }
        return false;
        */
        
        //Method-2
        unordered_set<int> s{nums.begin(), nums.end()};
         
        return nums.size()!=s.size();
        
    }
};