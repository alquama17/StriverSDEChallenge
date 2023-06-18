#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_profit=INT_MIN;
        int before=prices[0];
        for(int i=0;i<prices.size();i++){
            int diff=prices[i]-before;
            max_profit=max(max_profit,diff);
            if(before>prices[i]){
                before=prices[i];
            }
        }
        return max_profit;
    }
};