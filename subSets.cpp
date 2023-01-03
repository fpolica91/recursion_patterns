#include "main.h"

// return subsets with a given sum

void helper(vector<int> &nums, int index, int target, int sum,
            vector<int> &current, vector<vector<int>> &ans) {
  int limit = nums.size();

  if (index == limit) {
    if (sum == target) {
      ans.push_back(current);
    }
    return;
  }
  sum += nums[index];
  current.push_back(nums[index]);
  helper(nums, index + 1, target, sum, current, ans);
  sum -= nums[index];
  current.pop_back();
  helper(nums, index + 1, target, sum, current, ans);
}

vector<vector<int>> subSets(vector<int> &nums, int target) {
  vector<int> current;
  vector<vector<int>> ans;
  int sum = 0;
  helper(nums, 0, target, sum, current, ans);
  return ans;
}