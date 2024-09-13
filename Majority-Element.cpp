#include <vector>

using namespace std;

class Solution {
public:
  int majorityElement(vector<int> &nums) {
    int idx =0, max = 0;
        sort(nums.begin(),nums.end());
        for(int i = 0; i< nums.size(); i++){
            if(nums[i] == nums[idx]){
                max++;
            }
            else
            {
                max--;
                if(max <= 0){
                    idx = i;
                    max = 1;
                }
            }
        }
        return nums[idx];
    }
};

int main() {
  std::vector<int> ex1_nums{3, 2, 3};
  std::vector<int> ex2_nums{2, 2, 1, 1, 1, 2, 2};

  Solution s;
  int out = 0;
  printf("exsample 1 : ");
  out = s.majorityElement(ex1_nums);
  printf("out : %d", out);

  printf("\r\n");
  printf("exsample 2 : ");
  out = s.majorityElement(ex2_nums);
  printf("out : %d", out);
  return 0;
}