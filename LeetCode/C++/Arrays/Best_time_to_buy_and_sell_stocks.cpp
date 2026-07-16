class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0;
        int p=0;
        for(int i=0;i<prices.size();i++)
        {
            for (int j=i+1;j<prices.size();j++)
            {
                p=prices[j]-prices[i];
                if (p>profit)
                {
                    profit=p;
                }
            }
        }
        return profit;
    }
};