#include <bits/stdc++.h>
using namespace std;

vector<int> smallerNumbersThanCurrent(vector<int>& nums)
{
    sort(nums.begin(),nums.end(),greater<int>());
    vector<int>result;
    int count=0;
    for(size_t i=0;i<nums.size();i++)
    {
        if(nums[i]>nums[i+1])
        {
            count++;
        }
        result.push_back(count);
    }
    return result;
}

int main()
{
    int i;
    cin >> i;
    vector<int> arr;
    while(i-- >0)
    {
        int a ;
        cin >> a;
        arr.push_back(a);
    }
    vector<int> result=smallerNumbersThanCurrent(arr);
    for(size_t i=0;i<result.size();i++)
    {
        cout << result[i]<<endl;
    }
return 0;
}
