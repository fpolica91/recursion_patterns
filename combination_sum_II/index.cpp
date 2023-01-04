#include "../main.h"


void processSum2(vector<int>& nums,int index ,int target, vector<vector<int>> &res, vector<int> &current){
    if(target == 0)
        res.push_back(current);
    
    for(int i = index; i < nums.size(); i ++){
        if(i > index and nums[i] == nums[i-1])
            continue;
        if(nums[i] > target)
            break;
        current.push_back(nums[i]);
        processSum2(nums, i + 1, target-nums[i], res, current);
        current.pop_back();
    }
        
    
}

vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
    sort(candidates.begin(), candidates.end());
    vector<int> curr;
    vector<vector<int>> res;
    processSum2(candidates, 0, target, res, curr);
    return res;
}