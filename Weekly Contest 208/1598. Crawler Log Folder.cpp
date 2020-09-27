class Solution {
public:
    int minOperations(vector<string>& l) {
        int k=0;
        for(int i=0;i<l.size();i++)
        {
            if(l[i]=="../")
            {
                if(k>0)
                k--;
            }
            else if(l[i]=="./")
            {
                k+=0;
            }
            else
            {
                k++;
            }
        }
        return k;
    }
};
