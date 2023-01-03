#include "main.h"

// pattern for returning number of subsquences with a given condition
int countHelper(vector<int> &nums, int index, int target, int &sum) {
  int limit = nums.size();
  if (index == limit) {
    if (sum == target)
      return 1;
    return 0;
  }

  sum += nums[index];
  int first = countHelper(nums, index + 1, target, sum);
  sum -= nums[index];
  int second = countHelper(nums, index + 1, target, sum);
  return first + second;
}

int countSubsets(vector<int> &nums, int k) {
  int sum = 0;
  return countHelper(nums, 0, k, sum);
}