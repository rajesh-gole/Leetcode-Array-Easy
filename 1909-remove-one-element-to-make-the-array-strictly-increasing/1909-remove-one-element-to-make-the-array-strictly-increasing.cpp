class Solution {
public:
    bool canBeIncreasing(vector<int>& nums) {
        int c1=0,c2=0;
int temp=nums[0];

//Iterate from l to r
for(int i=1;i<nums.size();i++)
{
	if(temp<nums[i]){
		temp=nums[i];
	}
	else{
		c1++;
	}
}

//Iterate from r to l
temp=nums.back();
for(int i=nums.size()-2;i>=0;i--)
{
	if(temp>nums[i]){
		temp=nums[i];
	}
	else{
		c2++;
	}
}

//Compare min of two count is <=1 or not

return min(c1,c2)<=1;

//rajesh-gole
    }
};