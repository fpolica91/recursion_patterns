#include "main.h"

bool helper(vector<int> &nums, int index, int target, int &sum){
  int limit = nums.size();
  if(index == limit){
    if(sum == target)
        return true;
    return false;
  }
  sum += nums[index];
  if(helper(nums, index + 1, target, sum)){
    return true;
  }

  sum -= nums[index];
  return helper(nums, index + 1, target, sum);  
}

bool subSet(vector<int> &nums, int target){
  int sum = 0;
  return helper(nums, 0, target, sum);
}