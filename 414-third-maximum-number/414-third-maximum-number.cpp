class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int _max = 0;
        
        unordered_set<int> seen{nums.begin(), nums.end()};
        
        if(seen.size() < 3) return *max_element(seen.begin(), seen.end());
        
        for(int i = 0; i < 3; ++i) {
            auto mx = max_element(seen.begin(), seen.end());
            _max = *mx; 
            seen.erase(mx);
        } 
        
        return _max;
    }
};

//rajesh-gole

/*
// Store all elements to set s
    
    unordered_set<int> s{nums.begin(), nums.end()};
    
    int res=0;
    
    unordered_set<int>::iterator it;
    
    // deleting maximum number upto 3rd max
    for(int i=0;i<3;i++)
    {
       it = max_element(s.begin(),s.end());
       res=*it;
       s.erase(it);
       
    }

    return res;
*/