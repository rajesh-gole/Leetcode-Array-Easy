class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int> ans;
        
        for(int i=0;i<nums.size();i++)
        {
            ans.insert(ans.begin()+i,nums[nums[i]]); //v.insert(pos, val) ;
        }
        return ans;
    }
};

/*

pos = nums[1]=2, val = nums[nums[1]]=1

nums[0]=0 nums[nums[0]]=0

*/

/*
// Another Solution

    vector<int>  v;
        
        for(int i = 0; i < nums.size(); i++)
        {
            int ans = nums[nums[i]];
            v.push_back(ans);
        }
        return v;
*/

//rajesh-gole