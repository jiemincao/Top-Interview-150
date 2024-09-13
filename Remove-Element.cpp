#include <vector>

using namespace std;

class Solution {
public:
  int removeElement(vector<int> &nums, int val) {
    int k = 0;
    for (int i = 0; i < nums.size(); i++) {
      if (nums[i] != val) {
        nums[k++] = nums[i];
      }
    }
    return k;
  }
};

int main() {
  std::vector<int> ex1_nums{3, 2, 2, 3};
  int ex1_val = 3;
  std::vector<int> ex2_nums{0, 1, 2, 2, 3, 0, 4, 2};
  int ex2_val = 2;

  Solution s;
  int ret_size = 0;
  printf("exsample 1 : ");
  ret_size = s.removeElement(ex1_nums, ex1_val);
  printf("%d, ", ret_size);
  for (int i = 0; i < ret_size; i++) {
    printf("%d ", ex1_nums[i]);
  }

  printf("\r\n");
  printf("exsample 2 : ");
  ret_size = s.removeElement(ex2_nums, ex2_val);
  printf("%d, ", ret_size);
  for (int i = 0; i < ret_size; i++) {
    printf("%d ", ex2_nums[i]);
  }
  return 0;
}