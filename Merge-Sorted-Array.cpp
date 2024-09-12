#include <vector>

using namespace std;

class Solution {
public:
  void merage(vector<int> &nums1, int m, vector<int> &nums2, int n) {
    for (int j = 0, i = m; j < n; j++) {
      nums1[i++] = nums2[j];
    }
    sort(nums1.begin(), nums1.end());
  }
};

int main() {
  std::vector<int> ex1_nums1{1, 2, 3, 0, 0, 0};
  std::vector<int> ex1_nums2{2, 5, 6};
  int ex1_m = 3, ex1_n = 3;
  std::vector<int> ex2_nums1{1};
  std::vector<int> ex2_nums2{};
  int ex2_m = 1, ex2_n = 0;
  std::vector<int> ex3_nums1{0};
  std::vector<int> ex3_nums2{1};
  int ex3_m = 0, ex3_n = 1;

  Solution s;
  printf("exsample 1 : ");
  s.merage(ex1_nums1, ex1_m, ex1_nums2, ex1_n);
  for (int i = 0; i < ex1_nums1.size(); i++) {
    printf("%d ", ex1_nums1[i]);
  }

  printf("\r\n");
  printf("exsample 2 : ");
  s.merage(ex2_nums1, ex2_m, ex2_nums2, ex2_n);
  for (int i = 0; i < ex2_nums1.size(); i++) {
    printf("%d ", ex1_nums1[i]);
  }

  printf("\r\n");
  printf("exsample 3 : ");
  s.merage(ex3_nums1, ex3_m, ex3_nums2, ex3_n);
  for (int i = 0; i < ex3_nums1.size(); i++) {
    printf("%d ", ex1_nums1[i]);
  }
  printf("\r\n");
  return 0;
}