class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        
        
        int count=0;
        int temp=INT_MIN;
        for(int i=0;i<sentences.size();i++){
        stringstream ss(sentences[i]);
        string word;
        while(ss>>word)
            count++;   
        if(count>temp)
            temp=count;
        else
            temp=temp; 
        count=0;
        }
        return temp;
    }
};