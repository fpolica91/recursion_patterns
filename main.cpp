#include "main.h"

int main() {

  vector<int> nums = {1, 2, 3, 1};
  int ans = countSubsets(nums, 2);
  cout << ans << " subsets found " << endl;
  cout << endl;
  vector<vector<int>> res = subSets(nums, 2);
  cout << "Subsets with given target: \n";
  for (auto c : res) {
    for (auto z : c) {
      cout << z << " ";
    }
    cout << endl;
  }

  cout << endl
  << endl;

  cout << "does subset with sum exist: \n";
  cout << subSet(nums, 2) <<
  endl;

  
}