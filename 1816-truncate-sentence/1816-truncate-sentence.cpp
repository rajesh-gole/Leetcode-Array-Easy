class Solution {
public:
    string truncateSentence(string s, int k) {
        
    string ans;
    int n=s.size(),count=k;
    
    for(int i=0;i<n && k>0;i++)
    {
     
        if(s[i]==' ')
            --k;
        if(k>0)
            ans+=s[i];

    }    
    return ans;
    }
};

// Without Stringstream


//rajesh-gole