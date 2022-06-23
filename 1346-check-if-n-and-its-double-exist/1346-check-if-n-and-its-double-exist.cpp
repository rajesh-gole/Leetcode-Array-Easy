class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        
        //create a set
        unordered_map<int,int> s;
        
        
        for(auto i:arr)
            {
                //Check if i/2 or 2*i is present in the set. If Yes, Return True.
                if((i%2)==0 && s[i/2]>0 || s[2*i]>0) 
                    {return true;}
                s[i]++; 
                //Else insert the value into set
            }
        return false;
        
    }
};