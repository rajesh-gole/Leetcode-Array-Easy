class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
    int x = 0;
    for(int i = 0; i < operations.size(); i++)
    {
        // ++x or x++, the 1th pos is always operator thats why [1]
        if(operations[i][1] == '-') 
            x--;
        else 
            x++;
    }
    return x;
    }
};



/*
        int c=0;
        for(int i=0;i<o.size();i++){
            if(o[i]=="++X"||o[i]=="X++"){
                c++;
            }
            else if(o[i]=="--X"||o[i]=="X--"){
                c--;
            }
        }
        return c;

*/

//rajesh-gole