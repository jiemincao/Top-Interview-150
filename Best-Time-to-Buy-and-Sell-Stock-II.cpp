#include <vector>
#include <cstdio>

using namespace std;

class Solution {
public:
  int maxProfit(vector<int> &prices) {
    int profit = 0;
        int size = prices.size();
        int buy = prices[0];
        for(int i = 1 ; i< size; i++){
            if(buy < prices[i]){
                profit += prices[i] - buy;
            }
            buy = prices[i];
        }
        return profit;
  }
};

int main() {
  std::vector<int> ex1_prices{7, 1, 5, 3, 6, 4};
  std::vector<int> ex2_prices{1, 2, 3, 4, 5};
  std::vector<int> ex3_prices{7, 6, 4, 3, 1};

  Solution s;
  int price = 0;
  printf("exsample 1 : ");
  price = s.maxProfit(ex1_prices);
  printf("%d ", price);

  printf("\r\n");
  printf("exsample 2 : ");
  price = s.maxProfit(ex2_prices);
  printf("%d ", price);

  printf("\r\n");
  printf("exsample 23 : ");
  price = s.maxProfit(ex3_prices);
  printf("%d ", price);
  return 0;
}