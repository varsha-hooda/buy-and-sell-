#include<iostream>
#include<limits>
#include<algorithm>
#include<vector>
using namespace std;
int maxprofit(vector<int>& prices){
    int minprice = prices[0];
    int profit = 0;
    for (int  i = 0; i < prices.size(); i++)
    {
        int currentprofit = prices[i] - minprice;
        profit = max(profit , currentprofit);
        minprice = min(minprice , prices[i]);
    }
    return profit;
    

}
int main (){
    vector<int> prices = {7,1,5,3,6,4};
    cout << maxprofit(prices);
    return 0 ;
}