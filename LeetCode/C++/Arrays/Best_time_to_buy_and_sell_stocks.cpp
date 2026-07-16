// class Solution {
// public:
//     int maxProfit(vector<int>& prices) {
//         int profit=0;
//         int p=0;
//         for(int i=0;i<prices.size();i++)
//         {
//             for (int j=i+1;j<prices.size();j++)
//             {
//                 p=prices[j]-prices[i];
//                 if (p>profit)
//                 {
//                     profit=p;
//                 }
//             }
//         }
//         return profit;
//     }
// };

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxprofit=0;
        int minprice=prices[0];
        for (int j=0;j<prices.size();j++)
        {
            if (prices[j]<minprice)
            {
                minprice=prices[j];
            }
            int profit= prices[j]-minprice;
            if (profit>maxprofit)
            {
                maxprofit=profit;
            }
             
        }
        return maxprofit;
    }