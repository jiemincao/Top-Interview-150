#include <vector>
#include <cstdio>

using namespace std;

class Solution {
public:
  int removeDuplicates(vector<int> &nums) {
    int k = 0, val = 0, size = nums.size();
    val = nums[0];
    nums[k++] = val;
    for (int i = 1; i < size; i++) {
        if (nums[i] != val) {
            val = nums[i];
            nums[k++] = val;
        }
    }
    return k;
  }
};

int main() {
  std::vector<int> ex1_nums{1, 1, 2};
  std::vector<int> ex2_nums{0, 0, 1, 1, 1, 2, 2, 3, 3, 4};

  Solution s;
  int ret_size = 0;
  printf("exsample 1 : ");
  ret_size = s.removeDuplicates(ex1_nums);
  printf("%d, ", ret_size);
  for (int i = 0; i < ret_size; i++) {
    printf("%d ", ex1_nums[i]);
  }

  printf("\r\n");
  printf("exsample 2 : ");
  ret_size = s.removeDuplicates(ex2_nums);
  printf("%d, ", ret_size);
  for (int i = 0; i < ret_size; i++) {
    printf("%d ", ex2_nums[i]);
  }
  return 0;
}