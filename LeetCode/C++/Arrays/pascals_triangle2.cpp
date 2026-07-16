class Solution {
public:
    vector<int> getRow(int rowIndex) {
                vector<vector<int>> answer;
        for (int i=0;i<rowIndex+1;i++)
        {
            vector<int>newrow;
            newrow.push_back(1);
            for(int j=0;j<i-1;j++)
            {
                newrow.push_back(answer[i-1][j]+answer[i-1][j+1]);
            }
            if (i>0)
            {
                newrow.push_back(1);
            }
            answer.push_back(newrow);
        }
        return answer[rowIndex];
    }
};