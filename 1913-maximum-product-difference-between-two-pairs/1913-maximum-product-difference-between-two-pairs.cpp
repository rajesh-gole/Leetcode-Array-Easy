class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        // Without Sorting the array
        int min1=nums[0], min2=INT_MAX;
        int max1=nums[0], max2=INT_MIN;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]<=min1)
            {
                min2=min1;
                min1=nums[i];
            }
            else if(nums[i]<min2)
                min2=nums[i];
            //cout<<min1<<" "<<min2;
            
            if(nums[i]>=max1)
            {
                max2=max1;
                max1=nums[i];
            }
            else if(nums[i]>max2)
                max2=nums[i];
            //cout<<max1<<" "<<max2;
        }
        
        return max1*max2 - min1*min2;
    }
};

// TC : O(n)



//rajesh-gole

