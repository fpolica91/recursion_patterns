#include "../main.h"
vector<vector<int>> ans;
vector<int> current;

void process(vector<int>& nums,int index ,int target){
    if(target == 0)
        ans.push_back(current);
    
    for(int i = index; i < nums.size(); i ++){
        if(i > index and nums[i] == nums[i-1])
            continue;
        if(nums[i] > target)
            break;
        current.push_back(nums[i]);
        process(nums, i + 1, target-nums[i]);
        current.pop_back();
    }
        
    
}

vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
    sort(candidates.begin(), candidates.end());
    process(candidates, 0, target);
    return ans;
}