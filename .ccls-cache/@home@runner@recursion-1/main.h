
#ifndef MAIN_H
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int countHelper(vector<int> &nums, int index, int target, int &sum);
int countSubsets(vector<int> &nums, int k);
void helper(vector<int> &nums, int index, int target, int sum,
            vector<int> &current, vector<vector<int>> &ans);
vector<vector<int>> subSets(vector<int> &nums, int target);

#endif