class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<vector<int>>data;
        data=matrix;
        for(int i=0;i<data.size();i++)
        {
            for(int j=0;j<data[0].size();j++)
            {
                if(data[i][j]==0)
                {
                    for(int k=0;k<data[0].size();k++)
                    {
                        matrix[i][k]=0;
                    }
                     for(int l=0;l<data.size();l++)
                    {
                        matrix[l][j]=0;
                    }
                    
                }
                else
                    continue;
            }
        }
    }
};