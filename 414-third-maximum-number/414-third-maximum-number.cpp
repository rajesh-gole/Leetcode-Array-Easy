class Solution {
public:
    int thirdMax(vector<int>& nums) {
        
    // Store all elements to set s
    unordered_set<int> s{nums.begin(), nums.end()};
    
    int res=0;
    
    unordered_set<int>::iterator it;

    // If the third maximum does not exist, return the maximum number. 
    if(s.size() < 3) return *max_element(s.begin(), s.end());
    
    // deleting maximum number upto 3rd max
    for(int i=0;i<3;i++)
    {
       it = max_element(s.begin(),s.end());
       res=*it;
       s.erase(it);
       
    }

    return res;

    }
};

//rajesh-gole


