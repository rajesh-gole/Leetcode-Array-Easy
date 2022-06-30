class Solution {
public:
    string truncateSentence(string s, int k) {
        stringstream ss(s);
        string word;
        string res;
        int count=0;
        while(ss>>word)
        {
            res=res+word;
            count++;
            if(count==k)
                break;
            res+=' ';
        }
        return res;
    }
};



//rajesh-gole