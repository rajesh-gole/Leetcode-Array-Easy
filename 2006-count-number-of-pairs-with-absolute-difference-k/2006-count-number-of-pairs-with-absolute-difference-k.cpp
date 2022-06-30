class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        map<int,int>mp;
        int ans=0;
        //mp[nums[0]]++;
        int item;
        int temp;
        
/*
nums=1,2,2,1 k=1

mp[0] = 0
mp[1] = 0
mp[2] = 0
mp[3] = 0
*/
        
        for(int i=0;i<nums.size();i++)
        {
           
            item=0;
            temp=0;
          
                item=nums[i]-k;
                temp=k+nums[i];
         
        
            if(mp[item]>0)
                 ans+=mp[item];
                
            if(mp[temp]>0)
                ans+=mp[temp];
            
            mp[nums[i]]++;
            
            
        }
        return ans;
    }
};

// T.C : O(n)
// S.C : O(n)




// rajesh-gole