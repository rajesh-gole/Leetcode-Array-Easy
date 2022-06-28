class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int curr_sum=0;
        int max_sum=INT_MIN;
        int n=nums.size();
        
        for(int i=0;i<n;i++)
        {
            curr_sum= max(nums[i],curr_sum+nums[i]);
            max_sum = max(curr_sum,max_sum);
        }
        return max_sum;
    }
};


/*
    int max_sum=nums[0], sum=nums[0];
    
        for(int i=1; i<nums.size(); i++) 
        {
            sum = max(nums[i], sum+nums[i]);
            if(sum>max_sum) 
            {
                max_sum=sum;
            }
        }
        
        return max_sum;
*/