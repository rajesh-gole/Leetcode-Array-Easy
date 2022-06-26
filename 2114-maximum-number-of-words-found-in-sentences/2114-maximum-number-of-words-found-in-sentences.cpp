class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        
        
        int res=0;
        for(int i=0;i<sentences.size();i++){
        // count length each sentence
        int len = std::count(sentences[i].begin(), sentences[i].end(), ' ')+1;
        res = max(res,len);
        }
        return res;
    }
};

//rajesh-gole