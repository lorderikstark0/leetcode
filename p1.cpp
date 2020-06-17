#include<bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> m;
        vector<int> result;
        for (int i=0; i<nums.size(); i++) {
            if ( m.find(target - nums[i]) == m.end() ) {
                m[nums[i]] = i;
            }else{
                result.push_back(m[target - nums[i]]);
                result.push_back(i);
            }
        }
        return result;
 }
int main()
{
    int  n;
    cin >> n;
    vector<int> arr;
    while(n-- >0)
    {
        int p;
        cin >> p;
        arr.push_back(p);
    }
    int target;
    cin >> target;
    vector<int> ans = twoSum(arr,target);
    for(size_t i=0;i<ans.size();i++)
    {
        cout << ans[i]<<endl;
    }
    return 0;
}