
#ifndef MAIN_H
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int countHelper(vector<int> &nums, int index, int target, int &sum);
int countSubsets(vector<int> &nums, int k);
void helper(vector<int> &nums, int index, int target, int sum,
            vector<int> &current, vector<vector<int>> &ans);
vector<vector<int>> subSets(vector<int> &nums, int target);
bool subSet(vector<int> &nums, int target);
bool helper(vector<int> &nums, int index, int target, int &sum);
void solve(vector<int>& candidates, int index,  int target);
vector<vector<int>> combinationSum(vector<int>& candidates, int target);


#endif