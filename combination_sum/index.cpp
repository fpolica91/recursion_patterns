#include "../main.h"


vector<int> current;
vector<vector<int>> ans;
int sum = 0;

void solve(vector<int>& candidates, int index,  int target){
    int limit = candidates.size();
    if(sum > target)
        return;
    if(index == limit){
        if(sum == target){
            ans.push_back(current);
        }
        return;
    }
    current.push_back(candidates[index]);
    sum += candidates[index];
    solve(candidates, index, target);

    current.pop_back();
    sum-= candidates[index];
    solve(candidates, index + 1, target);
}
    
vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
    solve(candidates, 0, target);
    return ans;
}