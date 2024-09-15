#include <vector>
#include <cstdio>
#include <algorithm>

using namespace std;

class Solution {
public:
  int rotate(vector<int> &nums, int k) {
        int size = nums.size();

        k = k % size;
         
        reverse(nums.begin(), nums.end());

        reverse(nums.begin(), nums.begin()+k);

        reverse(nums.begin()+k, nums.end());
    }
};

int main() {
  std::vector<int> ex1_nums{1, 2, 3, 4, 5, 6, 7};
  int ex1_k =3;
  std::vector<int> ex2_nums{-1, -100, 3, 99};
  int ex2_k =2;

  Solution s;
  printf("exsample 1 : ");
  s.rotate(ex1_nums, ex1_k);
  for (int i = 0; i < ex1_nums.size() ; i++) {
    printf("%d ", ex1_nums[i]);
  }

  printf("\r\n");
  printf("exsample 2 : ");
  s.rotate(ex2_nums, ex2_k);
  for (int i = 0; i < ex2_nums.size() ; i++) {
    printf("%d ", ex2_nums[i]);
  }
  return 0;
}