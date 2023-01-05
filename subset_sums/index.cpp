#include "../main.h"


void dfs(vector<int> arr, int index, int &sum, vector<int> &ans){
    
    if(index == arr.size()){
        return;
    }
    
    for(int i=index; i < arr.size(); i++){
        sum+= arr[i];
        ans.push_back(sum);
        dfs(arr, i + 1, sum, ans);
        sum-=arr[i];
    }

}

vector<int> subsetSums(vector<int> arr, int N)
{   
    vector<int> ans;
    sort(arr.begin(), arr.end());
    ans.push_back(0);
    int sum = 0;
    dfs(arr, 0, sum, ans);
    
    return ans;
}